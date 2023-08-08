#include<stdio.h>

int main(){
  int num,count=1;
  printf("Enter the size of your triangle:");
  scanf("%d",&num);

  for(int i=0;i<=num;i++){
    for(int j=0;j<i;j++){
      printf("%d",count++);
      printf("\t");
    }
    printf("\n");
  }
}