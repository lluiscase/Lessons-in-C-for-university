#include <stdio.h>
#include <malloc.h>

typedef struct{
  int items ;
  struct Node* prox;
}Node;

Node* createNode(int values){
  Node* newNode =(Node*)malloc(sizeof(Node));

  newNode->items = values;

  newNode->prox = NULL;

  return newNode;
}

Node* insertAtBeginning(Node** newNode, int values){
  Node* data = createNode(values);
  data->prox = *newNode; 
  *newNode = data;
}

/*void insertAtEnd(){
  Pode adicionar itens tanto inicio quanto no fim :D
}*/

Node* deleteFromEnd(){

}

void displayList(Node* newNode ){
  Node* display = newNode;
  if(display == NULL){
    printf("Your list is empty please try again");
  }else{
    while(display != NULL){
      printf("%d ->", display->items);
      display = display->prox;
    }

  }
}

void freeList(Node* newNode){
  Node* current = newNode;
  Node* prox;

  while(current != NULL){
    prox = current->prox;
    free(current);

    current = prox;
  }
}

int main(void) {
  Node* head = NULL;

  insertAtBeginning(&head, 3);
  insertAtBeginning(&head, 2);
  insertAtBeginning(&head, 1);
  insertAtBeginning(&head, 4);
  displayList(head);
  freeList(head);
  return 0;
}

//Testando a lista com um exercicio gerado pela chatGPT
/*#include <stdio.h>
#include <malloc.h>
#include<stdlib.h>

typedef struct{
  int id;
  float GPA;
  struct Node* prox;
}Node;

Node* createNode(int code, float RA ){
  Node* newNode =(Node*)malloc(sizeof(Node));

  newNode->id = code;
  newNode->GPA = RA;

  newNode->prox = NULL;

  return newNode;
}

Node* insertAtBeginning(Node** newNode, int code, float RA){
  Node* data = createNode(code,RA);
  data->prox = *newNode; 
  *newNode = data;
}

/*void insertAtEnd(){
  Pode adicionar itens tanto inicio quanto no fim :D
}

Node* deleteFromEnd(){

}

void displayList(Node* newNode ){
  Node* display = newNode;
  if(display == NULL){
    printf("Your list is empty please try again");
  }else{
    while(display != NULL){
      printf("%d %f->", display->id, display->GPA);
      display = display->prox;
    }

  }
}

void freeList(Node* newNode){
  Node* current = newNode;
  Node* prox;

  while(current != NULL){
    prox = current->prox;
    free(current);

    current = prox;
  }
}

void shutdownList(){
  printf("\nGet out of list...\n");
  exit(1);
}

int main(void) {
  Node* head = NULL;

  insertAtBeginning(&head, 3, 44.5);
  insertAtBeginning(&head, 2, 49.5);
  insertAtBeginning(&head, 1, 484.5);
  insertAtBeginning(&head, 4, 454.5);
  displayList(head);
  shutdownList();

  return 0;
}*/