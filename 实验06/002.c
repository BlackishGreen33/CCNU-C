#include<stdio.h>
int main(){
	int a[10], b[10], c[20], temp, n = 20;
	for(int i = 0; i < 10; i++) scanf("%d", &a[i]);
	for(int i = 0; i < 10; i++) scanf("%d", &b[i]);
	// Bubble Sort
	for(int i = 1; i <= 9; i++){
		for(int j = 0; j <= 9 - i; j++){
			if(a[j] < a[j + 1]){
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	// Selection Sort
	for(int i = 0; i < 10 - 1; i++){
        int max = i;
        for(int j = i + 1; j < 10; j++){
            if(b[j] > b[max]) max = j;
        }
        temp = b[max];
        b[max] = b[i];
        b[i] = temp;
    }
    for(int i = 0; i < 10; i++) c[i] = a[i], c[i+10] = b[i];
    for(int i = 1; i <= 19; i++){
		for(int j = 0; j <= 19 - i; j++){
			if(c[j] < c[j + 1]){
				temp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = temp;
			}
		}
	}
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++) if(c[i] == c[j]){
            for(int k = j; k < n - 1; k++) c[k] = c[k+1];
            n--;
    		j--;
   	   	}
   	}
	for(int i = 0; i < n; i++) printf("%-4d", c[i]);
    return 0;
}
