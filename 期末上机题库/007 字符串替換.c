#include<stdio.h>
#include<string.h>

void Replace(char *str, char *substr, char *newstr);

int main(){
    int i, j, h;
    char ch, a[20], b[10], c[10];
    printf("??入主串：");
    scanf("%s", a);
    printf("??入子串：");
    scanf("%s", b);
    printf("??入新串：");
    scanf("%s", c);
    printf("替?后的字符串?：");
    Replace(a, b, c);
    return 0;
}

void Replace(char *str, char *substr, char *newstr){
    int i, j, h, m=0, t, k, n=0;
    char A[20], *p;
    p=A;
    i=strlen(str),j=strlen(substr), h=strlen(newstr);
    for(k=0; k<i; ){
        for(m=0,t=0; t<j; t++){
            if(*(str+k+t) == *(substr+t))
                m++;
        }
        if(m == j){
            for(t=0; t<h; t++){
                *(p+n) = *(newstr+t);
                n++;
            }
            k = k+j;
        }
        else{
            *(p+n) = *(str+k);
            n++;
            k++;
        }
    }
    while(k<i){
        *(p+n) = *(str+k);
        n++; k++;
    }
    *(p+n) = '\0';
    for(t=0;t<n;t++) printf("%c",*(p+t));
    printf("\n");
}
