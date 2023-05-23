#include<stdio.h>
#include<stdlib.h>

int main(int num, char *tip[]){
	FILE *txt1, *txt2;
	char str = '0';
	txt1 = fopen(tip[1], "a");
	if(txt1 == 0) exit (0);
	txt2 = fopen(tip[2], "r");
	if(txt2 == 0) exit (0);
	while(str != EOF){
		str = fgetc(txt2);
		fputc(str, txt1);
	}
	fclose(txt1);
	fclose(txt2);
}
