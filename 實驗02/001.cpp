#include<stdio.h>

int main(){
	long int x, xh, xl;
	scanf("%ld", &x);
	xh = (x & 0xffff0000) >> 16;
	xl = x & 0x0000ffff;
	if(xh%2 == 0) printf("蔼せΤ才腹计琌案计\n");
	else printf("蔼せΤ才腹计琌计\n");
	if(xl%2 == 0) printf("せΤ才腹计琌案计");
	else printf("せΤ才腹计琌计");	
	return 0;
}
