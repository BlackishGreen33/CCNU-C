#include<stdio.h>
int main(){
	int n;
    scanf("%x", &n);
    int x = 0;
	int s = n;
	while(s > 0){
		x = x*16+s%16;
		s = s/16;
	}
	(x == n) ? printf("YES") : printf("NO");
	return 0;
}
