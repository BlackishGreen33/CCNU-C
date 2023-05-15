#include<stdio.h>
#include<stdbool.h>
void generate_numbers(int n, int used_digits, bool *visited){
    if(n == 3){
        printf("%d\n", used_digits);
        return;
    }
    for(int i = 7; i <= 9; i++){
        if(visited[i]) continue;
        visited[i] = true;
        generate_numbers(n + 1, used_digits * 10 + i, visited);
        visited[i] = false;
    }
}
int main(){
    bool visited[10] = {false};
    generate_numbers(0, 0, visited);
    return 0;
}
