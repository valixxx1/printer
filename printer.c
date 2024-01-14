/*

Это основной файл программы, плавно выводящей
код из файла на экран.

Заголовочные файлы:
	colors.h - вывод цветного текста

Создатель: Гершун Валентин
Даты: 13.01.2024 - 13.01.2024

*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "colors.h"

void _read(FILE* file)
{
	int _char;
	_char = fgetc(file);
	while (_char != EOF) {
		write(1, (char*) &_char, 1);
		_char = fgetc(file);
		usleep(30000);
	}
}



void title(char* text)
{
	rainbow(text);
	putchar('\n');
	putchar('\n');
}

int main(int argc, char** argv)
{
	if (argc == 1) {
		puts("No input files!");
		return 1;
	}
	FILE *file;
	file = fopen(argv[1], "r");
	if (file == NULL) {
		puts("File does not exist!");
		return 2;
	}
	title(argv[1]);
	_read(file);
	fclose(file);
	return 0;
}
