/*

Это основной файл программы, плавно выводящей
код из файла на экран.

Заголовочные файлы:
	colors.h - вывод цветного текста

Создатель: Гершун Валентин
Даты: 13.01.2024 - 13.01.2024

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

#ifdef __linux__

  #include <unistd.h>

  #define SLEEPTIME_MILS 30

  #define WRITEC(descriptor,ch) write(descriptor, (char*) &ch, 1)

  #define SLEEP(_time) usleep(_time * 1000)

#endif

#ifdef _WIN64
  #include <Windows.h>

  #define WRITEC(descriptor,ch) printf("%c", ch)

  #define SLEEP(_time) Sleep(_time)

#endif

#include "colors.h"

#define STDOUT 1

#define SLEEPTIME_MILS 30

#define NEWLINE '\n'

#define ERR_FEW_ARGS 1
#define ERR_NO_FILES 2

typedef int32_t i32;

void _read(FILE* file)
{
	i32 _char;

	_char = fgetc(file);
	while (_char != EOF) {
		WRITEC(STDOUT, _char);
		_char = fgetc(file);
		SLEEP(SLEEPTIME_MILS);
	}
}

void title(char* text)
{
	rainbow(text);
	putchar(NEWLINE);
	putchar(NEWLINE);
}

int main(i32 argc, char** argv)
{
	FILE *file;
	if (argc == 1) {
		puts("No input files!");
		return ERR_FEW_ARGS;
	}
	file = fopen(argv[1], "r");
	if (file == NULL) {
		puts("File does not exist!");
		return ERR_NO_FILES;
	}
	title(argv[1]);
	_read(file);
	fclose(file);
	return 0;
}
