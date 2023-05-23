#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    for(int i = 1; i < 200; i++){
        int n, j, l, ok=1;
        char *first, *end;
        char s[10];
        n = i*i;
        itoa(n, s, 10);
        l = strlen(s);
        first = s;
        end = s+l-1;
        for(; first <= end; first++, end--)
            if(*first != *end){
	            ok = 0;
	            break;
	        }
        if(ok) printf("%d ", i);
    }
}
