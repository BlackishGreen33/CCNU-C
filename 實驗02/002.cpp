#include<stdio.h>

int main(){
	long int x, xh, xl;
	scanf("%ld", &x);
	xh = (x & 0x0000ffff) << 16;
	xl = (x & 0xffff0000) >> 16;
	x = xh + xl;
	printf("¥æ´««á¡G %x", x); 
	return 0;
}
