#include<stdio.h>

int main(){
	int number, arr[10], len = 0, result = 0, digit;
	printf("Please enter a positive integer¡G");
	scanf("%d", &number);
	
	// reversed number
	while(number > 0){
	    digit = number % 10;
	    arr[len] = digit;
	    len++;
	    result = result * 10 + digit;
	    number /= 10;
	}
	printf("The reversed number is %d\n", result);
	
	// bubble sort
	for(int i = 0; i < len - 1; i++) {
	    for(int j = 0; j < len - 1 - i; j++) {
	        if(arr[j] > arr[j + 1]) {
	            int temp = arr[j];
	            arr[j] = arr[j + 1];
	            arr[j + 1] = temp;
	        }
	    }
	}
	
	// max & min
	int max = 0, min = 0;
	for(int i = 0; i < len; i++){
	    min = min * 10 + arr[i];
	    max = max * 10 + arr[len - 1 - i];
	}
	printf("The maximum number is %d\n", max);
	printf("The minimum number is %d\n", min);
	
	return 0;
} 
