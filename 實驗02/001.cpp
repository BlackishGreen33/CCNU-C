#include<stdio.h>

int main(){
	long int x, xh, xl;
	scanf("%ld", &x);
	xh = (x & 0xffff0000) >> 16;
	xl = x & 0x0000ffff;
	if(xh%2 == 0) printf("���Q���즳�Ÿ��ƬO����\n");
	else printf("���Q���즳�Ÿ��ƬO�_��\n");
	if(xl%2 == 0) printf("�C�Q���즳�Ÿ��ƬO����");
	else printf("�C�Q���즳�Ÿ��ƬO�_��");	
	return 0;
}
