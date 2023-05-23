#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char t;
    int len;
    char name[80] = {0};
    FILE *fp = fopen("wang.dat","w");
    if(fp == NULL){
        printf("can not open file: wang.dat\n");
        exit(-1);
    }
    gets(name);
    len = strlen(name);

    fputs(name, fp);
    fputs("\n", fp);

    for(int i = 0; i < len; i++)
        for(int j = i+1; j < len; j++)
            if(name[i] > name[j]){
                t = name[i];
                name[i] = name[j];
                name[j] = t;
            }

    printf("%s", name);
    fputs("\nname", fp);

    fclose(fp);
    return 0;
}
