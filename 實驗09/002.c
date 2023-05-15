#include<stdio.h>
#include<stdbool.h>
#define N 5

int Like[N][N];
int Books[N];
bool Assigned[N];

void PrintBooks(){
    for(int i = 0; i < N; i++)
        printf("Person %c gets book %d\n", 'A' + i, Books[i]);
    printf("\n");
}

void AssignBooks(int i){
    if(i == N){
        PrintBooks();
        return;
    }
    for(int j = 0; j < N; j++){
        if(!Assigned[j] && Like[i][j] == 1){
            Books[i] = j;
            Assigned[j] = true;
            AssignBooks(i + 1);
            Books[i] = -1;
            Assigned[j] = false;
        }
    }
}

int main(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++) 
            scanf("%d", &Like[i][j]);
    }
    for(int i = 0; i < N; i++) Books[i] = -1;
    AssignBooks(0);
    return 0;
}
