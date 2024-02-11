#include<stdio.h>
#include<stdlib.h>

int Num(int num , int x){
    if(x==num){
        return num;
    }
    printf("%d\t",x);
    Num(num,x+1);
}

int main(){
    int num = 50; //As per question 
    Num(num,1);
}
