# printer
printer - это консольная программа с открытым исходным кодом на **C** для **Ubuntu** (и, возможно, для других дистрибутивов **Linux**), которая плавно печатает код из файла ~~с подсветкой синтаксиса~~ (пока что без подсветки, но скоро будет).

# Зачем это надо
Программа будет медленно и плавно читать файл так, чтобы глаза успевали просмотреть содержимое. Это, как я считаю, удобно.

# Сборка
Для сборки программы вам нужен CMake. Если его у вас нет, скачайте его через `sudo apt install cmake`. После этого выполните следующие шаги:
1 - Перейдите в папку build `cd build`
2 - Напишите команду для сборки `cmake .. && cmake --build .`
Результат - файл printer без расширения, который является программой.

# Запуск
Если вы хотите посмотреть, как это работает, то выполните команду `./printer ../include/colors.h`. Программа выведет заголовок радужным цветом (это красиво) и будет плавно, строчку за строчкой, выводить текст файла `colors.h`, который является одним из файлов для разработки программы `printer`.

Для запуска программы для чтения другого файла, вам нужно ввести в консоль `./printer qwerty.txt`, где qwerty.txt - название или путь до файла, который нужно прочитать, а `./printer` - путь до программы.

Если использовать `./printer`, то программа выдаст ошибку `No input files!`, потому что ей не указали файл для прочтения, и завершится с кодом `1`.

При использовании `./printer wrhfd.js`, где `wrhfd.js` - несуществующий файл, то программа выдаст ошибку `File does not exist!`, потому что файла не существует, и завершится с кодом `2`.

Если всё сделано верно, программа выполнится и завершится с кодом `0`.

# Проблемы
- Русские буквы печатаются медленнее английских.

# Что будет в следующих версиях
- Исправление ошибок и проблем
- Подстветка синтаксиса для файлов разных языков (например, Python, C++, Java и т. д.)
- Возможность отрегулировать скорость чтения
- Файл `bash`, запускающий программу из любой директории
- Возможность работать на других платформах
