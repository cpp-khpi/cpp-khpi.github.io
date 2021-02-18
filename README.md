# Програмування мовою C++

## Мета

- **Оволодіти** основами мови програмування [C++](https://ru.wikipedia.org/wiki/C%2B%2B).
- **Отримати** навички розробки програм з використанням принципів [ООП](https://ru.wikipedia.org/wiki/%D0%9E%D0%B1%D1%8A%D0%B5%D0%BA%D1%82%D0%BD%D0%BE-%D0%BE%D1%80%D0%B8%D0%B5%D0%BD%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%BD%D0%BE%D0%B5_%D0%BF%D1%80%D0%BE%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5).
- **Ознайомитись** зі стандартною бібліотекою [STL](https://ru.wikipedia.org/wiki/%D0%A1%D1%82%D0%B0%D0%BD%D0%B4%D0%B0%D1%80%D1%82%D0%BD%D0%B0%D1%8F_%D0%B1%D0%B8%D0%B1%D0%BB%D0%B8%D0%BE%D1%82%D0%B5%D0%BA%D0%B0_%D1%88%D0%B0%D0%B1%D0%BB%D0%BE%D0%BD%D0%BE%D0%B2).

---

<span id="soft"></span>
## Програмні засоби та інструменти

### Основні

1. [GNU Compiler Collection](https://uk.wikipedia.org/wiki/GNU_Compiler_Collection) - компілятор.

2. [Clang](https://uk.wikipedia.org/wiki/Clang) в складі [LLVM](https://en.wikipedia.org/wiki/LLVM). [LLVM Download Page](http://releases.llvm.org/download.html). Зручні інструменти:
	- [scan-build](https://clang-analyzer.llvm.org/scan-build.html).
	- [LeakSanitizer](https://clang.llvm.org/docs/LeakSanitizer.html).
	- [ClangFormat](https://clang.llvm.org/docs/ClangFormat.html).

3. [Doxygen](https://www.doxygen.nl/download.html) <span id="doxy"></span> - система документування початкового коду (див. [рекомендації](https://github.com/cpp-khpi/cpp-khpi.github.io/raw/master/doc/doxy.pdf)). Додатково встановити:
	- [Graphviz](https://graphviz.org/download/) - Graph Visualization Software.
	- [Mscgen](http://www.mcternan.me.uk/mscgen/) - Message Sequence Chart Renderer.

### Додаткові

1. [Cppcheck](http://cppcheck.sourceforge.net/)<span id="cppcheck"></span> - статичний аналізатор C/C++ коду, призначений для пошуку помилок, які не виявляються компілятором.

2. [Eclipse IDE for C/C++ Developers](http://www.eclipse.org/downloads/eclipse-packages/) - середовище розробки програм мовою [C++](http://isocpp.org/), [C/C++ Software Development with Eclipse](http://eclipsebook.in/)).

3. [GitLab](https://gitlab.com/) - система керування репозиторіями програмного коду для [Git](https://uk.wikipedia.org/wiki/Git):
	- потрібна попередня [реєстрація](https://gitlab.com/users/sign_up);
	- при реєстрації **обов'язково** вказувати **Username** у вигляді **surname_name** - прізвище та ім'я розробника [латинкою в нижньому регістрі](http://translit.kh.ua/?lat&passport).

### Online Compilers and IDEs

1. [GDB Online](https://www.onlinegdb.com/). Online compiler and debugger tool for C/C++ languages.
2. [JDoodle](https://www.jdoodle.com/). Easy and Quick way to run Programs Online.
3. [Coding Ground](https://www.tutorialspoint.com/codingground.htm). An online Lab for IT Professionals.
4. [C++ shell](http://cpp.sh/)

---

<span id="lab_todo"></span>
## Спільні завдання

|  №  | Завдання |
|:---:|:---------|
|  1  | Розробити програму для рішення [індивідуального завдання](#appendices) <sup><abbr title="Уточнення завдання за розсудом викладача">[1](#note_summary)</abbr></sup>. |
|  2  | Виконати [рефакторинґ](https://refactoring.guru/) з урахуванням загальних [вимог](#lab_requirements). |
|  3  | Підготувати до перевірки опис розробленої програми у вигляді [звіту](#lab_report). |
|  4  | Виправити програму з урахуванням отриманих зауважень. |

---

<span id="lab_requirements"></span>
## Вимоги

1. **Проекти** розміщувати в директоріях `surname_name/c/labXX` та `surname_name/cpp/labXX`, де:
	- *surname_name* - назва особистої директорії в сховищі *Git*;
	- *XX* - номер роботи.

2. **Початковий** код, що компілюється без помилок та відповідає [Coding Conventions](https://github.com/cpp-khpi/cpp-khpi.github.io/raw/master/doc/cpp_coding_conventions.pdf), додавати до репозиторію, розташовуючи в директоріях `src`.

3. **Звіти** розташовувати в файлах `readme.md` директорій проектів, або в файлах `.doc/.docx/.odd + .pdf` директорій `doc`.

4. **Коментувати** текст програми для обробки пакетом [Doxygen](#doxy).

5. **Повідомлення** до коміту - що саме ви зберігаєте - має бути зрозумілим. На початку повідомлення вказувати:
	- **номер** тікета (завдання) - номер у [таблиці](#lab_todo), що містить список спільних завдань та зауважень;
	- **тему/компонент** до якого належить коміт. Наприклад:

		`#1, #3 shevchenko01: завдання виконано, звіт підготовлений до перевірки`
		
		`#2 task01: отформатирован текст и добавлены комментарии`
		
		`#4 Locator: алгоритм пошуку оптимізовано`
		
		`#4 task02: удалены лишние файлы`
		
		`#4 raeth: fix regression after [a002b90]`

6. **Наприклад**, студент з особистим каталогом `shevchenko_taras`
	
	- розробляє всі проекти у межах одного *репозиторія* з назвою `shevchenko_taras`;
	- для початкового кода проектів двох перших лабораторних робіт мовами *С* та *C++* використовує відповідні шляхи:
		
		`shevchenko_taras/c/lab01/src/`
		
		`shevchenko_taras/cpp/lab01/src/`
		
	- для звітів використовує наступні шляхи і назви файлів:
		
		`shevchenko_taras/c/lab01/doc/lab01.odt`
		
		`shevchenko_taras/c/lab01/doc/lab01.pdf`
		
		`shevchenko_taras/cpp/lab01/doc/lab01.odt`
		
		`shevchenko_taras/cpp/lab01/doc/lab01.pdf`

---

<span id="lab_report"></span>
## Звіт

1. **Оформляється** українською мовою та надається у вигляді електронних документів:
	- що редагується *(docx/doc/odt/html/md/txt)*;
	- що зручно проглядається *(pdf/djvu/chm)*.

2. **Документ**, що друкується:
	- формат: **A4**; орієнтація: **книжкова**; поля: **2.5 см** ліворуч, **2 см** праворуч, **2 см** вгорі, **2 см** знизу;
	- шрифт: **Liberation Serif**, **Times New Roman** чи подібний; розмір: **14 pt**; міжрядковий інтервал: **одинарний**;
	- відступ першого рядка абзацу: **1.25 см**; вирівнювання: **у ширину**.

3. **Структура** звіту (див. [приклад](https://github.com/cpp-khpi/cpp-khpi.github.io/raw/master/doc/report.pdf)):

| Обов'язковий розділ | Зауваження |
|:--------------------|:-----------|
| **Номер і тема роботи** | Вказується з вирівнюванням по центру рядка. |
| **Мета: ...** | Відповідає темі та завданню. |
| **1 ВИМОГИ** | Повне формулювання завдання. |
| **1.1 Розробник** | Інформація про розробника:<br> - прізвище, ім'я, по батькові;<br> - назва академічної групи;<br> - номер варіанту. |
| **1.2 Загальне завдання** | Вимоги, обмеження та зауваження. |
| **1.3 Задача** | Прикладна задача відповідно до варіанта. |
| **2 ОПИС ПРОГРАМИ** | Внутрішня робота програми, її поведінка:<br> калькулювання даних, обробка даних<br> та інші функції програми. |
| **2.1 Функціональне призначення** | Призначення програми.<br> Обмеження на застосування. |
| **2.2 Опис логічної структури** | Алгоритм програми.<br> Використовувані методи.<br> Структура програми. |
| **2.3 Важливі фрагменти програми** | Частини тексту програми, що демонструють рішення задачі. |
| **3 ВАРІАНТИ ВИКОРИСТАННЯ** | Опис поведінки програми: "хто" і "що" може зробити.<br> Відповідає [функціональним вимогам](https://uk.wikipedia.org/wiki/%D0%A4%D1%83%D0%BD%D0%BA%D1%86%D1%96%D0%BE%D0%BD%D0%B0%D0%BB%D1%8C%D0%BD%D1%96_%D0%B2%D0%B8%D0%BC%D0%BE%D0%B3%D0%B8).<br> Ілюструється за допомогою копій екрану з описом. |
| **ВИСНОВКИ** | Заключення стосовно повноти досягнення мети. |

---

<span id="references"></span>
## Рекомендації

### C Programming Language

- [Wiki. C Programming Language](https://en.wikipedia.org/wiki/C_(programming_language))
- [Wiki. C Data Types](https://en.wikipedia.org/wiki/C_data_types)
- [Wiki. C Syntax](https://en.wikipedia.org/wiki/C_syntax)
- [Wiki. C Standard Library](https://en.wikipedia.org/wiki/C_standard_library)
- [Wiki. Operators in C and C++](https://en.wikipedia.org/wiki/Operators_in_C_and_C%2B%2B)
- [Wiki. The most recent standard for the C programming language](https://en.wikipedia.org/wiki/C18_(C_standard_revision))
- [HTML and PDF versions of C89, C99, and C11](http://port70.net/~nsz/c/)
- [C Reference](https://en.cppreference.com/w/c)

- C Programming: A Modern Approach, 2nd Edition by K. N. King Paperback. ISBN-13: 978-0393979503, ISBN-10: 0393979504
- Study Guide: for C Programming: A Modern Approach by Manuel E. Bermude. ISBN-13: 978-0393969467, ISBN-10: 0393969460
- Programming in C (3rd Edition) by Stephen G. Kochan. ISBN-13: 978-0672326660, ISBN-10: 0672326663
- C Programming Language, 2nd Edition by Brian W. Kernighan. ISBN-13: 978-0131103627, ISBN-10: 0131103628
- Язык программирования С. Керниган Б., Ритчи Д. ISBN 978-5-8459-1975-5, 0-13-110362-8
- C Unleashed by Richard Heathfield and Lawrence Kirby. ISBN-10: 0672318962, ISBN-13: 978-0672318962
- Искусство программирования на С: Фундаментальные алгоритмы, структуры данных и примеры приложений : пер. с англ. / Ричард Хэзфилд, Лоуренс Кирби, - ISBN 966-7393-82-8
- C: The Complete Reference, 4th Ed. by Herbert Schildt. ISBN-13: 978-0072121247, ISBN-10: 0072121246
- Полный справочник по C. Герберт Шилдт. ISBN 978-5-8459-1709-6, 0-0721-2124-6
- C How to Program by Paul J. Deitel, Harvey Deitel. ISBN-13: 978-0133976892, ISBN-10: 0133976890
- Как программировать на С. Х. М. Дейтел, П. Дж. Дейтел. ISBN: 978-5-9518-0337-5

### C++ Programming Language

- [Wiki. C++ Programming Language](https://en.wikipedia.org/wiki/C%2B%2B)
- [C++ Reference](http://en.cppreference.com/)
- [C++ Language Tutorial](http://www.cplusplus.com/doc/tutorial/)
- [Standard C++ Library Reference](http://www.cplusplus.com/reference/)
- [C++ STL Tutorial](http://www.tutorialspoint.com/cplusplus/cpp_stl_tutorial.htm)
- [Bjarne Stroustrup's homepage](http://www.stroustrup.com/)
- [C++ 11 FAQ от Бьярна Страуструпа](http://sergeyteplyakov.blogspot.com/2012/05/c-11-faq.html)
- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)
- [C++98, C++03, C++11 and C++14](http://port70.net/~nsz/c/c%2B%2B/)
- [Coding Standards](https://isocpp.org/wiki/faq/coding-standards)

- The C++ Programming Language, 4th Edition by Bjarne Stroustrup. ISBN-13: 978-0321563842, ISBN-10: 0321563840
- C++: The Complete Reference, 4th Edition by Herbert Schildt. ISBN-13: 978-0072226805, ISBN-10: 0072226803
- This item:Effective C++: 55 Specific Ways to Improve Your Programs and Designs (3rd Edition) by Scott Meyers. ISBN-13: 978-0321334879, ISBN-10: 0321334876
- Effective Modern C++: 42 Specific Ways to Improve Your Use of C++11 and C++14 by Scott Meyers. ISBN-13: 978-1491903995, ISBN-10: 1491903996
- Effective STL: 50 Specific Ways to Improve Your Use of the Standard Template Library by Scott Meyers. ISBN-13: 978-0201749625, ISBN-10: 0201749629

---

<span id="appendices"></span>
## Додатки

|  №  | Файл | Зміст |
|:---:|:-----|:------|
|  1  | [programming.zip](https://github.com/cpp-khpi/cpp-khpi.github.io/raw/master/doc/programming.zip) | Завдання лабораторних робіт |
|  2  | [cpp_coding_conventions.pdf](https://github.com/cpp-khpi/cpp-khpi.github.io/raw/master/doc/cpp_coding_conventions.pdf) | Правила оформлення коду |
|  3  | [doxy.pdf](https://github.com/cpp-khpi/cpp-khpi.github.io/raw/master/doc/doxy.pdf) | Рекомендації до використання [Doxygen](#doxy) |
|  4  | [report.pdf](https://github.com/cpp-khpi/cpp-khpi.github.io/raw/master/doc/report.pdf) | Приклад звіту у форматі PDF |
|  5  | [readme.md](https://github.com/cpp-khpi/cpp-khpi.github.io/blob/master/doc/demo/readme.md) | Приклад звіту у текстовому форматі |

---

<span id="notes"></span>
## Примітки

1. <span id="note_summary"></span>Уточнення завдання та засобів розробки за розсудом викладача.

