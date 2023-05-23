#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
void multiply(char *a, char *b){ 
    int la = strlen(a), lb = strlen(b); 
    int *s = (int*)calloc(la + lb, sizeof(int)), flag = 0; 
    for(int i = 0; i < la; i++) 
        for(int j = 0; j < lb; j++) 
            s[i+j+1] += (a[i] - '0') * (b[j] - '0'); 
    for(int i = la + lb - 1; i >= 0; i--){ 
        if(s[i] >= 10){ 
            s[i-1] += s[i] / 10; 
            s[i] %= 10; 
        } 
    } 
    for(int i = 0; i < la+lb; i++){ 
        if(s[i]){ 
            for(int j = i; j < la+lb; j++) printf("%d", s[j]); 
            flag = 1; 
        } 
        if(flag) break; 
    } 
    free(s); 
}
int main(){ 
    char a[10001], b[10001]; 
    scanf("%s%s", a, b); 
    multiply(a, b); 
    return 0; 
}
