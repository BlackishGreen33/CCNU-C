#include<stdio.h>
int main(){
	int n;
    scanf("%d", &n);
    int x = 0;
	int s = n;
	while(s>0){
		x = x*10+s%10;
		s = s/10;
	}
	(x == n) ? printf("YES") : printf("NO");
	return 0;
}
