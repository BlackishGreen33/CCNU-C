#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int Prosum(int n);

int main(){
    int a[10]={0};
    int n, l;
    //scanf("%d" , &n);
    for(int i = 0; i < 10000; i++){
        n = i;
        while(1){
            if(n > 9) n = Prosum(n);
            else{
                a[n]++;
                break;
            }
        }
    }
    printf("�b1��%d���A?�r��?��?1~9������?��??��??�G\n", 10000);
	for(int i = 1; i < 10; i++)
		printf("?�r��?��?%d������????�G%d\n", i, a[i]);
    return 0;
}

int Prosum(int m){
    int n = 1, b, prosum = 1;
    while(m){
        b = m % 10;
        if(b == 0) b = 1;
        prosum = prosum * b;
        m = m / 10;
    }
    return prosum;
}
