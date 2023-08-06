#include<stdio.h>
int main(){
  int num1,num2,even[100],odd[100],evenCount=0,oddCount=0;
  printf("Enter two numbers: ");
  scanf("%d%d",&num1,&num2);
  for(int i=num1;i<num2;i++){
    if(i%2==0){
      even[evenCount] =i;
      evenCount++;
    }
    else{
      odd[oddCount] =i;
      oddCount++;
    }
  }
    printf("\n");
    printf("\nOdd numbers:%d\n",oddCount);
    for(int i=0;i<oddCount;i++){
      printf("%d ",odd[i]);
    }

    printf("\n");
    printf("\nEven numbers:%d\n",evenCount);
    for(int i=0;i<evenCount;i++){
      printf("%d ",even[i]);
    }

  }