#include<stdio.h>
int chess[8][8] = {0};
int a[8], b[16], c[16];
int sum = 0;
void Choice(int n);
int main(){
    for(int i = 0; i < 8; i++) a[i] = 1;
    for(int i = 0; i < 16; i++){
        b[i] = 1;
        c[i] = 1;
    }
    Choice(0);
    printf("Total number of solutions for 8 queens problem: %d\n", sum);
    return 0;
}
void Choice(int n){
    for(int m = 0; m < 8; m++){
        if(a[m] && b[n + m] && c[n - m + 7]){
            chess[n][m] = 1;
            a[m] = 0;
            b[n + m] = 0;
            c[n - m + 7] = 0;
            if(n == 7){
                sum++;
                printf("Solution %d:\n", sum);
                for(int i = 0; i < 8; i++){
                    printf("\t\t");
                    for(int j = 0; j < 8; j++)
                        printf("%d ", chess[i][j]);
                    printf("\n");
                }
                printf("\n");
                if(sum % 10 == 0){
                    printf("Press Enter to continue...");
                    getchar();
                }
            } 
			else Choice(n + 1);
            chess[n][m] = 0;
            b[n + m] = 1;
            c[n - m + 7] = 1;
            a[m] = 1;
        }
    }
}
