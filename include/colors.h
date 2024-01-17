void red(char* text){
	printf("\033[31m%s\033[0m", text);
}

void orange(char* text){
	printf("\033[33m%s\033[0m", text);
}

void yellow(char* text){
	printf("\033[93m%s\033[0m", text);
}

void green(char* text){
	printf("\033[32m%s\033[0m", text);
}

void lightblue(char* text){
	printf("\033[36m%s\033[0m", text);
}

void blue(char* text){
	printf("\033[34m%s\033[0m", text);
}

void purple(char* text){
	printf("\033[35m%s\033[0m", text);
}

void redc(char text){
	printf("\033[31m%c\033[0m", text);
}

void orangec(char text){
	printf("\033[33m%c\033[0m", text);
}

void yellowc(char text){
	printf("\033[93m%c\033[0m", text);
}

void greenc(char text){
	printf("\033[32m%c\033[0m", text);
}

void lightbluec(char text){
	printf("\033[36m%c\033[0m", text);
}

void bluec(char text){
	printf("\033[34m%c\033[0m", text);
}

void purplec(char text){
	printf("\033[35m%c\033[0m", text);
}

void rainbow(char* text)
{
	double gradient, rounded;

  gradient = 7 / 2 / strlen(text);
	for (int i = 0; i < strlen(text); i++){
		rounded = round(gradient);
		if (rounded == 0.0){
			redc(text[i]);
		}
		else if (rounded == 1.0){
			orangec(text[i]);
		}
		else if (rounded == 2.0){
			yellowc(text[i]);
		}
		else if (rounded == 3.0){
			greenc(text[i]);
		}
		else if (rounded == 4.0){
			lightbluec(text[i]);
		}
		else if (rounded == 5.0){
			bluec(text[i]);
		}
		else {
			purplec(text[i]);
		}
		gradient = (i+1) * 7 / strlen(text);
	}
}
