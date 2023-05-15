#include<stdio.h>

int main(){
	long int x, xh, xm, xl, temp;
	scanf("%ld", &x);
	temp = x;
	xh = (x & 0x000000ff) << 24;
	xm = x & 0x00ffff00;
	xl = (x & 0xff000000) >> 24;
	x = xh + xm + xl;
	printf("Swap the highest and lowest eight bits¡G %x\n", x);
	xh = temp & 0xfff00f00;
	xm = (temp & 0x000000ff) << 12; 
	xl = (temp & 0x000ff000) >> 12;
	temp = xh + xm + xl;
	printf("Swap the second-highest and second-lowest eight bits¡G %x", temp);
	return 0;
}
