#include<stdio.h> 
void main(){ 
    int i, j, k = 0, a[2000], b[2000], flag = 1, s = 0, sum = 0; 
    // ��X2~1999��������� 
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
    // ��X��� 
    for(i = 0; i < k; i++) printf("%4d ", a[i]); 
    printf("\n\n\n");
    // �p��۾F��Ƥ��t���`�M 
    for(i = 0; i < k-1; i++){ 
        b[i] = a[i+1] - a[i]; 
        printf(" %4d", b[i]); 
        sum += b[i]; 
    } 
    printf("\n %d \n\n",sum); 
    // ��X�۾F��Ƥ��M��1898���϶� 
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
