#include<stdio.h>
#include<string.h>
#define MAX_LINES 100
#define MAX_LINE_WIDTH 80
void sort_line(char *line) {
    int length = strlen(line);
    for(int i = 0; i < length - 1; i++){
        for(int j = 0; j < length - i - 1; j++){
            if(line[j] > line[j + 1]){
                char temp = line[j];
                line[j] = line[j + 1];
                line[j + 1] = temp;
            }
        }
    }
}
int main(){
    char lines[MAX_LINES][MAX_LINE_WIDTH];
    int line_count = 0;
    FILE *file;
    file = fopen("input.txt", "r");
    if(file == NULL){
        printf("cannot open file\n");
        return 1;
    }
    while(fgets(lines[line_count], MAX_LINE_WIDTH, file) != NULL) 
		line_count++;
    fclose(file);
    for(int i = 0; i < line_count; i++) sort_line(lines[i]);
    file = fopen("input.txt", "w");
    if(file == NULL){
        printf("cannot open file\n");
        return 1;
    }
    for(int i = 0; i < line_count; i++){
        if(strlen(lines[i]) > 1)
            fputs(lines[i], file);
        if(i < line_count - 1 && strlen(lines[i + 1]) > 1)
            fputs("\n", file);
    }
    fclose(file);
    return 0;
}
