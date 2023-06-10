#include<stdio.h>
void blackhole(int num){
	int max, min, temp, i = 0, j;
	int a[4];
	while(num != 6174 || i == 0){
		a[0] = num/1000;a[1]=(num%1000)/100;a[2]=(num%100)/10;a[3]=num%10;
		for(i=0; i<4; i++)
			for(j=i+1; j<4; j++)
				if(a[i] < a[j]){
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
		i = 0;
		max = a[0]*1000+a[1]*100+a[2]*10+a[3];
		min = a[3]*1000+a[2]*100+a[1]*10+a[0];
		num = max-min;
		++i;
		if(num == 0){
			printf("计 %d\n计 %d\n畉 %d", max, min, num);
			break;
		}
		else printf("计 %d\n计 %d\n畉 %d\n", max, min, num);
	}
}
int main(){
	int a;
	void blackhole(int num);
	scanf("%d", &a);
	blackhole(a);
}
