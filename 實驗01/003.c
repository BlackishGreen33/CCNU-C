#include<stdio.h>

int main(){
	short a, b, c, temp = 0;
	unsigned short aa, bb, cc;
	scanf("%hd %hd %hd", &a, &b, &c);
	aa = a;
	bb = b;
	cc = c;
	if(aa > bb){
		temp = aa;
		aa = bb;
		bb = temp;
 	}
 	if(aa > cc){
		temp = aa;
		aa = cc;
		cc = temp;
	}
 	if(bb > cc){
		temp = bb;
		bb = cc;
		cc = temp;
	}
	a = aa;
	b = bb;
	c = cc;
	printf("�̤j�G %hu, ��: %hd\n", cc, c);
	printf("�̤p�G %hu, ��: %hd",  aa, a);
	return 0;
}
