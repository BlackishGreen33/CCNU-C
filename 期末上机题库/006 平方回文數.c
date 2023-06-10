#include<stdio.h>
#include<stdlib.h>
int isPalindrome(int n) {
    char s[10];
    sprintf(s, "%d", n);
    for(int i = 0; i < strlen(s) / 2; i++)
        if(s[i] != s[strlen(s) - i - 1]) return 0;
    return 1;
}
int main(){
	scanf("test6");
    for(int i = 1; i < 200; i++)
        if(isPalindrome(i * i)) printf("%d ", i);
    return 0;
}
