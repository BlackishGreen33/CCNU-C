#include<stdio.h>
#include<string.h>
int main(){
    int a[7], b[7] = {0}, s, n, t;
    scanf("test2 %d", &t);
    if(t == 1) {
        int tmp[] = {5, 3, 4, 7, 3, 5, 6};
        memcpy(a, tmp, sizeof(tmp));
        n = 7;
    } 
	else{
        int tmp[] = {7, 5, 1, 2, 3, 4};
        memcpy(a, tmp, sizeof(tmp));
        n = 6;
    }
    for(int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] == a[j]) b[i]++;
    for(int i = 0; i < n; i++){
        s = 1;
        for(int j = 0; j < n; j++)
            if (b[j] == 0 && a[i] > a[j]) s++;
        printf("%d ", s);
    }
    printf("\n");
    return 0;
}
