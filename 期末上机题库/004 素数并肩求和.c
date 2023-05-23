#include<stdio.h> 
void main(){ 
    int i, j, k = 0, a[2000], b[2000], flag = 1, s = 0, sum = 0; 
    // 找出2~1999之間的質數 
    for(i = 2; i < 2000; i++){ 
        for (j = 2; j <= i/2; j++){ 
            if (!(i % j)){ 
                flag = 0; 
                break; 
            } 
        } 
        if(flag) a[k++] = i; 
        flag = 1;
    }
    // 輸出質數 
    for(i = 0; i < k; i++) printf("%4d ", a[i]); 
    printf("\n\n\n");
    // 計算相鄰質數之差及總和 
    for(i = 0; i < k-1; i++){ 
        b[i] = a[i+1] - a[i]; 
        printf(" %4d", b[i]); 
        sum += b[i]; 
    } 
    printf("\n %d \n\n",sum); 
    // 找出相鄰質數之和為1898的區間 
    for(i = 0; i < k; i++){ 
        s = 0; 
        for(j = i; j < k; j++){ 
            if (s < 1898) s += b[j]; 
            else break; 
        } 
        if(s == 1898){ 
            for(int x = i; x < j; x++) printf("%5d", b[x]); 
            printf("\n\n\n"); 
        } 
    } 
}
