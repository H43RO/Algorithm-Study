#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node{
    char name[20];
    int id;
    struct node *link;
} Node;

Node *head = NULL;

void printLinkedList(Node *head){
    Node *p = head;
    
    while(p != NULL){
        printf("Name : %6s,\tID : %d\n", p->name, p->id);
        p = p->link;
    }
}

void addItem(Node* pre, char *name, int id){
    Node *new;
    
    new = (Node *)malloc(sizeof(Node));
    strcpy(new->name, name);
    new-> id = id;
    new-> link = NULL;
    
    if(head == NULL){ //원소가 없을 때
        head = new;
    }else if(pre == NULL){ //리스트 맨 끝에 삽입할 때
        new->link = head;
        head = new;
    }else{ //리스트 중간에 삽입할 때
        new->link = pre->link;
        pre->link = new;
    }
}

void deleteItem(char *name, int id){
    Node *pre;
    Node *del;
    
    if(head == NULL){
        printf("ERROR\n");
        return;
    }
    
    if(strcmp(head->name, name) == 0 && head->id == id){
        del = head;
        head = del->link;
        free(del);
    }else{
        pre = head;
        while(pre != NULL){
            if(strcmp(pre->link->name, name) == 0 && pre->link->id == id){
                del = pre->link;
                pre->link = del->link;
                free(del);
                return;
            }else{
                pre = pre->link;
            }
        }
    }
}

Node* searchByName(Node *head, char *name){
    Node *p = head;
    
    //If List is empty
    if(p == NULL){
        printf("%s", "ERROR\n");
        return p;
    }
    
    while(p != NULL){
        if(strcmp(p->name, name) == 0){
            return p;
        }else{
            p = p -> link;
        }
    }
    
    return NULL;
}

Node* searchById(Node *head, int id){
    Node *p = head;
    
    //If List is empty
    if(p == NULL){
        printf("%s", "ERROR\n");
        return p;
    }
    
    while(p != NULL){
        if(p->id == id){
            return p;
        }else{
            p = p -> link;
        }
    }
    
    return NULL;
}

int main(void){
    Node *pre;
    
    addItem(NULL, "H43RO", 1000);
    printLinkedList(head);
    
    printf("\n");
    
    addItem(NULL, "APPLE", 2000);
    printLinkedList(head);
    
    
    printf("\n");
    
    pre = searchByName(head, "H43RO");
    addItem(pre, "iPHONE", 3000);
    printLinkedList(head);
    
    printf("\n");
    
    pre = searchById(head, 1000);
    addItem(pre, "MACPRO", 4000);
    printLinkedList(head);
    
    printf("\n");
    deleteItem("H43RO", 1000);
    printLinkedList(head);
    
    return 0;
}
