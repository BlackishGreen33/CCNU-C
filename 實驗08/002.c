#include<stdio.h>
#include<string.h>
#include<ctype.h>
typedef struct{
    char word[100];
    int count;
} WordInfo;
int getWord(char *str, char *word){
    int i = 0;
    while(isalpha(str[i])){
        word[i] = tolower(str[i]);
        i++;
    }
    word[i] = '\0';
    return i;
}
void sortWords(WordInfo words[], int count){
    int i, j;
    WordInfo temp;
    for(i = 0; i < count; i++){
        for(j = i + 1; j < count; j++){
            if(words[j].count > words[i].count){
                temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
            else if(words[j].count == words[i].count && strcmp(words[j].word, words[i].word) < 0){
                temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
        }
    }
}
int main(){
    char str[1000];
    char word[100];
    WordInfo words[1000];
    int count = 0, i, j, flag;
    printf("Plz enter a sentence¡G\n");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0';){
        if(isalpha(str[i])){
            j = getWord(str + i, word);
            flag = 0;
            for(j = 0; j < count; j++){
                if(strcmp(words[j].word, word) == 0){
                    words[j].count++;
                    flag = 1;
                    break;
                }
            }
            if(!flag){
                strcpy(words[count].word, word);
                words[count].count = 1;
                count++;
            }
            i += strlen(word);
        }
        else i++;
    }
    sortWords(words, count);
    printf("Result¡G\n");
    for(i = 0; i < count; i++)
        printf("%s(%d) ", words[i].word, words[i].count);
    return 0;
}
