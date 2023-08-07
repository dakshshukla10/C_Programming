int main(){
  int num,choice,sum=0;
  do{
    printf("###MENU###\n");
    printf("Enter a choice:1.Calculate Sum 2.Show num & sum 3. Exit");
    scanf("%d",&choice);

    switch(choice){
      case 1:
      printf("Enter a number(-1 to end the program):");
      scanf("%d",&num);
      if(num==-1){
        break;
      }
      else{
        for(int i=0;i<num;i++){
          sum+=i;
        }
      }
      case 2:
      
    }
  } while (choice != 3);
  return 0;
}