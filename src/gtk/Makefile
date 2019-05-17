PROJECT := gtk01
CC := gcc

all:
	$(CC) `pkg-config --cflags gtk+-3.0` -o $(PROJECT) $(PROJECT).c `pkg-config --libs gtk+-3.0`

clean:
	rm $(PROJECT)

install:
	sudo apt-get install libgtk-3-dev

run:
	./$(PROJECT)
