#include<stdio.h>

int main(){
	long int x, xh, xl;
	scanf("%ld", &x);
	xh = (x & 0xffff0000) >> 16;
	xl = x & 0x0000ffff;
	if(xh%2 == 0) printf("The high sixteen-bit signed number is an even number.\n");
	else printf("The high sixteen-bit signed number is an odd number.\n");
	if(xl%2 == 0) printf("The lower sixteen-bit signed number is an even number.");
	else printf("The lower sixteen-bit signed number is an odd number.");	
	return 0;
}
