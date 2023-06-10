#include<stdio.h>
int isPrime(int n) {
    if(n <= 1) return 0;
    if(n == 2) return 1;
    if(n % 2 == 0) return 0;
    for(int i = 3; i * i <= n; i += 2)
        if (n % i == 0) return 0;
    return 1;
}
int main() {
    int primes[2000];
    int differences[2000];
    int primeCount = 0;
    for(int i = 2; i <= 2000; i++)
        if(isPrime(i)){
            primes[primeCount] = i;
            primeCount++;
        }
    for(int i = 0; i < primeCount - 1; i++)
        differences[i] = primes[i + 1] - primes[i];
    int sum = 0;
    int count = 0;
    for(int i = 0; i < primeCount - 1; i++){
        sum = 0;
        for(int j = i; j < primeCount - 1; j++){
            sum += differences[j];
            if(sum == 1898){
                count++;
                break;
            }
            else if(sum > 1898){
                break;
            }
        }
    }
    scanf("test4");
    printf("連續差為:\n");
    for(int i = 0; i < primeCount - 1; i++)
        printf("%d ", differences[i]);
    printf("\n連續差的和:\n");
    for(int i = 0; i < primeCount - 1; i++){
        if(i == primeCount - 2) printf("%d", differences[i]);
        else printf("%d+", differences[i]);
    }
    printf("\n\n連續差和為1898有 %d 種", count);
    return 0;
}
