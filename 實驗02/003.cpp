#include<stdio.h>

int main(){
	long int x, xh, xm, xl, temp;
	scanf("%ld", &x);
	temp = x;
	xh = (x & 0x000000ff) << 24;
	xm = x & 0x00ffff00;
	xl = (x & 0xff000000) >> 24;
	x = xh + xm + xl;
	printf("程蔼籔程ユ传 %x\n", x);
	xh = temp & 0xfff00f00;
	xm = (temp & 0x000000ff) << 12; 
	xl = (temp & 0x000ff000) >> 12;
	temp = xh + xm + xl;
	printf("Ω蔼籔Ωユ传 %x", temp);
	return 0;
}
