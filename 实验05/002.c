#include<stdio.h>
#include<math.h>

int main(){
	for(int n = 1; n < 1000; n++)
	  	if(n == pow(n/100, 3) + pow(n%100/10, 3) + pow(n%10, 3)) 
		  	printf("%d ", n);
  	return 0;
}
