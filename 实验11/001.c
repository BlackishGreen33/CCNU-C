//#include<stdio.h>
//#include<string.h>

char *shift(char *pstr, int n, char mode){
	int len = strlen(pstr);
	char temp[100];
	strncpy(temp, pstr + len - n, n);
	strncpy(temp + n, pstr, len - n);
	strncpy(pstr, temp, len);
	return pstr;
}

//int main(){
//	char str[100] = "12345678";
//	printf("Original string: %s\n", str);
//	shift(str, 3, 'R');
//	printf("After right shift: %s\n", str);
//	shift(str, 3, 'L');
//	printf("After left shift: %s\n", str);
//	return 0;
//}
