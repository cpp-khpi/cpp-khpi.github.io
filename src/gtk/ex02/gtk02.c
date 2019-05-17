#include <gtk/gtk.h>

enum { COL_NAME = 0, COL_STATUS, NUM_COLS };

static GtkTreeModel *create_and_fill_model(void)
{
	GtkListStore *store;
	GtkTreeIter iter;

	store = gtk_list_store_new(NUM_COLS, G_TYPE_STRING, G_TYPE_UINT);

	/* Append a row and fill it */
	gtk_list_store_append(store, &iter);
	gtk_list_store_set(store, &iter, COL_NAME, "File #1", COL_STATUS, 11,
			   -1);

	/* Append another row and fill it */
	gtk_list_store_append(store, &iter);
	gtk_list_store_set(store, &iter, COL_NAME, "File #2", COL_STATUS, 12, -1);

	return GTK_TREE_MODEL(store);
}

static GtkWidget *create_view_and_model(void)
{
	GtkCellRenderer *renderer;
	GtkTreeModel *model;
	GtkWidget *view;

	view = gtk_tree_view_new();

	/* Column #1 */
	renderer = gtk_cell_renderer_text_new();
	gtk_tree_view_insert_column_with_attributes(GTK_TREE_VIEW(view), -1,
						    "Name", renderer, "text",
						    COL_NAME, NULL);

	/* Column #2 */
	renderer = gtk_cell_renderer_text_new();
	gtk_tree_view_insert_column_with_attributes(GTK_TREE_VIEW(view), -1,
						    "State", renderer, "text",
						    COL_STATUS, NULL);

	model = create_and_fill_model();

	gtk_tree_view_set_model(GTK_TREE_VIEW(view), model);

	g_object_unref(model);

	return view;
}

int main(int argc, char **argv)
{
	GtkWidget *window;
	GtkWidget *view;
	gtk_init(&argc, &argv);
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	g_signal_connect(window, "delete_event", gtk_main_quit,
			 NULL);
	view = create_view_and_model();
	gtk_container_add(GTK_CONTAINER(window), view);
	gtk_widget_show_all(window);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER_ALWAYS);
	gtk_main();

	return 0;
}
