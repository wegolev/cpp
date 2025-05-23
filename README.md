## Programs with multiple code files

```g++ main.cpp Sales_item.h -o main -std=c++2a -Wall```

[details](https://www.learncpp.com/cpp-tutorial/programs-with-multiple-code-files/) & [in details](https://ilyachalov.livejournal.com/338139.html)

Мы будем использовать в примерах и при проверке задач компилятор Clang 16-й версии.

Подробнее:
При проверке задач мы используем следующие ключи компилятора:

```clang++ --std=c++20 -O3 -fsanitize=address,undefined -Wall -Wextra -Werror```

```clang++ hello.cpp -o hello```

```./hello```

Для 

Если опцию -o не указать, то сгенерированный исполняемый файл будет по умолчанию назван a.out. В дальнейшем для простых примеров мы будем использовать краткую форму записи команды:

```clang++ hello.cpp && ./a.out```

С её помощью мы компилируем программу и в случае успеха компиляции сразу же запускаем.

## Ввод конца файла с клавиатуры
Разные операционные системы используют для конца файла различные значения. Для ввода символа конца файла в операционной системе Windows достаточно нажать комбинацию клавиш <Ctrl+z> (удерживая нажатой клавишу <Ctrl>, нажать клавишу <z>), а затем клавишу <Enter> или <Return>. На машине с операционной системойUNIX, включая Mac OS-X, как правило, используется комбинация клавиш <Ctrl+d>.

## Использование перенаправления файлов
Неоднократный ввод этих транзакций при проверке программы может оказаться утомительным. Большинство операционных систем поддерживает перенаправление файлов, позволяющее ассоциировать именованный файл со стандартным устройством ввода и стандартным устройством вывода:
```addItems <infile >outfile```
Здесь подразумевается, что $ — это системное приглашение к вводу,а наша программа суммирования была откомпилирована в исполняемый файл addItems.exe (или addItems на системе UNIX). Эта команда будет читать транзакции из файла infile и записывать ее вывод в файл outfile в текущем каталоге.