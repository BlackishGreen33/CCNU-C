#include<stdio.h>
#include<ctype.h>
int main(){
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    printf("Words separated from sentence: \n");
    for(int i = 0; sentence[i] != '\0'; i++)    {
        if(isalpha(sentence[i])){
            for(int j = i; sentence[j] != '\0'; j++){
                if(!isalpha(sentence[j])){
                    sentence[j] = '\0';
                    printf("%s\n", &sentence[i]);
                    i = j;
                    break;
                }
            }
        }
    }
    return 0;
}
