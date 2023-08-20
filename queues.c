#include<stdio.h>
#include<stdbool.h> // To return true or false
#define M 5

typedef struct queue{
  int front,rear;
  int data[M];
} queue;

queue q;

//Initalization of queue

void initializeQueue(){
  q.front = -1; 
  q.rear = -1;
}

//Check if the queue is empty

bool isEmpty(){
  return q.front == -1;
}

//Check if queue is full

bool isFull(){
  return q.rear == M-1;
}

//Enqueue an element to the rear of the queue

void enqueue(int item){
  if(isFull()){
    printf("Error:Oveflow condition reached!\n");
    return;
  }
  if (isEmpty()){
    q.front=0;
  }
  q.data[++q.rear] = item;
}

//Dequeue an element from the front of the queue

int dequeue(){
  if(isEmpty()){
    printf("Error:Underflow condition\n");
    return -1;
  }
  int item = q.data[q.front];
  if(item == q.data[q.front]){
    q.front=q.rear=-1;
  }
  else{
    q.front++;
  }
  return item;
}

//Peek the front element

int peek(){
  if (isEmpty()){
    printf("Queue is empty.Will show -1\n");
    return -1;
  }
  return q.data[q.front];
}

int main(){
  initializeQueue();
  int n=1;
  do{
    printf("Enter [1]Enqueue [2]Dequeue [3]Peek [4]Exit\n");
    scanf("%d",&n);
    switch(n){
      int num;
      case 1:
        printf("Enter the element you want to insert:");
        scanf("%d",&num);
        enqueue(num);
        break;
      case 2:
        {int Front = peek();
        dequeue();
        printf("First element has been dequeued:%d\n",Front);}
        break;
      case 3:
      {
        int Front = peek();
        printf("The front value is:%d\n",Front);
      }
      break;
      case 4:
        break;
    } 
  } while (n!=4);
  return 0;
}