#include<stdio.h>
#include<string.h>

void filter(char *str, char *s){
    int i, j, k;
    int len_str = strlen(str);
    int len_s = strlen(s);
    for(i = 0; i < len_str; i++){
        for(j = 0; j < len_s; j++){
            if(str[i] == s[j]){
                for(k = i; k < len_str; k++) str[k] = str[k + 1];
                len_str--;
                i--;
                break;
            }
        }
    }
}

int main(){
    char str[71], s[71];
    printf("Plz enter a string¡G");
    fgets(str, 71, stdin);
    int len = strlen(str);
    if(str[len - 1] == '\n') str[len - 1] = '\0';
    printf("Plz enter the characters to filter out¡G");
    fgets(s, 71, stdin);
    if(s[len - 1] == '\n') s[len - 1] = '\0';
    filter(str, s);
    printf("The filtered string is¡G%s", str);
    return 0;
}
