#include<stdio.h>
#include<ctype.h>
int main(){
    char str1[100], str2[100];
    int i = 0, j = 0;
    printf("Plz enter a string¡G");
    fgets(str1, 100, stdin);
    while(str1[i] != '\0'){
        if(!isdigit(str1[i])){
            str2[j++] = '*';
            while(!isdigit(str1[i]) && str1[i] != '\0') ++i;
        }
        else str2[j++] = str1[i++];
    }
    str2[j] = '\0';
    printf("The filtered string is¡G%s\n", str2);
    return 0;
}
