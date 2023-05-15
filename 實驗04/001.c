#include <stdio.h>

void sort(int *m, int *n){
	if(*m < *n){
		int temp = *m;
	    *m = *n;
	    *n = temp;
	}
}

int main(){
    int num;
    printf("Please enter a four-digit positive integer¡G");
    scanf("%d", &num);
    int a = num / 1000; 
    int b = num % 1000 / 100; 
    int c = num % 100 / 10; 
    int d = num % 10; 
    printf("The reversed number is %d%d%d%d\n", d, c, b, a);
    sort(&a, &b);
    sort(&a, &c);
    sort(&a, &d);
    sort(&b, &c);
    sort(&b, &d);
    sort(&c, &d);
    printf("The maximum number is %d%d%d%d\n", a, b, c, d);
    printf("The minimum number is %d%d%d%d\n", d, c, b, a);
}
