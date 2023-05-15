#include<stdio.h>

int main(){
    int n,m;
    printf("Plz enter a natural number¡G");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= n-1; j++){
            m = n*n - (n-1) + j*2;
            printf("%d ", m);
        }
        if(i == n) break;
        break;
    }
    return 0;
}
