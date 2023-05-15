//#include<stdio.h>

int *myfunc(int *p, int n){
	int temp = 0;
	for(int i = 0; i < n; i++){
	    if(p[i] != 0){
	    	p[temp] = p[i];
	    	temp++;
	    }
	}
	for(int i = temp; i < n; i++) p[i] = 0;
	return p;
}

//int main(){
//	int n;
//	scanf("%d", &n);
//	int a[n];
//	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
//	int *p = myfunc(a, n);
//	for(int i = 0; i < n; i++) printf("%d ", *(p + i));
//	return 0;
//}
