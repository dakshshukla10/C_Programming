/*C program to swap two numbers using pointers*/

#include<stdio.h>

//Defination of prototype function
void Swap(int *a, int *b);

//Driver code
int main(){
  int a , b;
  printf("Enter the value of number 1:");
  scanf("%d",&a);
  printf("Enter the value of number 2:");
  scanf("%d",&b);
  Swap(&a,&b);
  printf("The numbers after swapping are: %d and %d",a,b);
  return 0;
}

//Swapping function
void Swap(int *a , int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}