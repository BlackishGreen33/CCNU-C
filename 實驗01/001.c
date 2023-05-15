#include<stdio.h>

int main(){
	int a, b, c, temp=0;
	scanf("%d %d %d", &a, &b, &c);
	if(a > b){
		temp = a;
		a = b;
		b = temp;
 	}
 	if(a > c){
		temp = a;
		a = c;
		c = temp;
	}
 	if(b > c){
		temp = b;
		b = c;
		c = temp;
	}
	printf("From small to large¡G %d %d %d", a, b, c);
	return 0;
}
