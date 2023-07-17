#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node {
    char word[10];
    int count;
    struct Node* next;
};
typedef struct Node Node;
Node* create_node(char* word) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    strcpy(new_node->word, word);
    new_node->count = 1;
    new_node->next = NULL;
    return new_node;
}
void add_word(Node** head, char* word) {
    if (*head == NULL) {
        *head = create_node(word);
        return;
    }
    Node* cur = *head;
    while (cur) {
        if (strcmp(cur->word, word) == 0) {
            cur->count++;
            return;
        }
        if (cur->next == NULL) {
            cur->next = create_node(word);
            return;
        }
        cur = cur->next;
    }
}
void sort_list(Node** head) {
    if (*head == NULL || (*head)->next == NULL) {
        return;
    }
    Node* sorted = NULL;
    Node* cur = *head;
    while (cur) {
        Node* prev = NULL;
        Node* sorted_cur = sorted;
        while (sorted_cur && strcmp(cur->word, sorted_cur->word) > 0) {
            prev = sorted_cur;
            sorted_cur = sorted_cur->next;
        }
        Node* next = cur->next;
        if (prev == NULL) {
            cur->next = sorted;
            sorted = cur;
        } else {
            prev->next = cur;
            cur->next = sorted_cur;
        }
        cur = next;
    }
    *head = sorted;
}
void print_list(Node* head){
    while (head) {
        printf("%s %d\n", head->word, head->count);
        head = head->next;
    }
}
int main(){
    char str[1000];
    fgets(str, 1000, stdin);
    Node* head = NULL;
    char* word = strtok(str, " \n");
    while(word){
        add_word(&head, word);
        word = strtok(NULL, " \n");
    }
    sort_list(&head);
    print_list(head);
    return 0;
}
