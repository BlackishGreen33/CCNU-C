//#include<stdio.h>

void fun(int x, int* p, int* n){
    int cnt = 0;
    for(int i = 2; i <= x; i += 2){
        if(x % i == 0){
            cnt++;
            *p = i;
            p++;
        }
    }
    *n = cnt;
}

//int main(){
//    int x = 24;
//    int arr[100];
//    int n;
//    fun(x, arr, &n);
//    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
//    return 0;
//}
