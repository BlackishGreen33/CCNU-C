#include<stdio.h> 
#include<string.h>
int main(){ 
    int a[100], b[100], s, n; 
    memset(b, 0, 100*sizeof(int)); 
    printf("Input N numbers. N = "); 
    scanf("%d", &n); 
    printf("Input %d Numbers:\n", n); 
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(a[i] == a[j]) b[i]++; 
    for(int i = 0; i < n; i++){ 
        s = 1; 
        for(int j = 0; j < n; j++)
            if(b[j] == 0 && a[i] > a[j]) s++; 
        printf("%d ",s); 
    }
    printf("\n"); 
    return 0; 
}
