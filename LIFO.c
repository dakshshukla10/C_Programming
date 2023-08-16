#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100

typedef struct{
  int items[MAX_SIZE];
  int top;
}Stack;

//Initalize stack

void initialize(Stack *s){
  s->top = -1;
}

//Function to check if the stack is full

int isFull(Stack *s){
  return s->top == MAX_SIZE - 1;
}

//Function to check if the stack is empty

int isEmpty(Stack *s){
  return s->top==-1;
  }

//Function to push an element onto stack

void push(Stack *s,int item){
  if(isFull(s)){
    printf("Stack is full!\n");
    return;
  }
  s->items[++s->top] = item;
}

//Function to pop an element from the stack

int pop(Stack *s){
  if(isEmpty(s)){
    printf("Stack is empty!\n");
    return -1;
  }
  return s->items[s->top--];
}

//Function to print the top element of the stack

void peek(Stack *s){
  if(isEmpty(s)){
    printf("Stack is empty!");
    return;
  }
  printf("Top element:%d\n",s->items[s->top]);
}

int main(){
  Stack s;
  initialize(&s);

  push(&s,10);
  push(&s,20);
  push(&s,30);
  push(&s,40);

  peek(&s);

  printf("Popped: %d\n",pop(&s));
  printf("Popped: %d\n",pop(&s));

  push(&s,70);

  peek(&s);

  return 0;
}