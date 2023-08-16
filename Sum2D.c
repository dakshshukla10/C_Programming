#include<stdio.h>
#define MAX_SIZE 3

//Prototype
void ShowArray(int arr[MAX_SIZE][MAX_SIZE]);
int SumArray(int arr[MAX_SIZE][MAX_SIZE]);

//Driver code
int main(){
  int arr[MAX_SIZE][MAX_SIZE];
  for(int i=0;i<MAX_SIZE;i++){
    for(int j=0;j<MAX_SIZE;j++){
      printf("Enter the value of matrix[%d][%d]:",i,j);
      scanf("%d",&arr[i][j]);
    }
  }
  ShowArray(arr);
  SumArray(arr);
  return 0;
}

//Printing out the array
void ShowArray(int arr[MAX_SIZE][MAX_SIZE]){
  for(int i=0;i<MAX_SIZE;i++){
    for(int j=0;j<MAX_SIZE;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
}

//Finding sum of each element
int SumArray(int arr[MAX_SIZE][MAX_SIZE]){
  int sum=0;
  for(int i=0;i<MAX_SIZE;i++){
    for(int j=0;j<MAX_SIZE;j++){
      sum+=arr[i][j];
    }
  }
  printf("The sum of the elements of array is:%d",sum);
  return 0;
}