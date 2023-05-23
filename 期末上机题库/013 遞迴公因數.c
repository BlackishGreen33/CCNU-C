#include <stdio.h>
int MCD(int a, int b);

int main (){
    int a, b;
	printf ("input integer a and b : ");
	scanf ("%d%d", &a, &b);
	printf ("MaxCommonDivisor = %d\n", MCD(a, b));
}

int MCD(int a, int b){
    if(a > b) MCD(b, a-b);
	else if(a < b) MCD(a, b-a);
	else return(a);
}
