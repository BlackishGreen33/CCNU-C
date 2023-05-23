#include<stdio.h>
#include<string.h>

char *judge(char *a, int b);

int main(){
	char str[100];
    printf("please input a word:\n");
	scanf("%s", str);
	int len = strlen(str);
	judge(str, len);
	printf("%s", str);
}

char *judge(char *a, int b){
	if(*(a+b-1) == 'y'){
		*(a+b-1) = 'i';
		*(a+b) = 'e';
		*(a+b+1) = 's';
		*(a+b+2) = '\0';
	}
	else if(*(a+b-1) == 's' || *(a+b-1) == 'o' || *(a+b-1) == 'x'){
		*(a+b) = 'e';
		*(a+b+1) = 's';
		*(a+b+2) = '\0';
	}
	else if(*(a+b-1) == 'h' && (*(a+b-2) == 'c' || *(a+b-2) == 's')){
		*(a+b) = 'e';
		*(a+b+1) = 's';
		*(a+b+2) = '\0';
	}
	else{
		*(a+b) = 's';
		*(a+b+1) = '\0';
	}
	return a;
}
