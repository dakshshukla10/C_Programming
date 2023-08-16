#include<stdio.h>
#include<math.h>

double factorial(int num){
  if(num<=1){
    return 1;
  }
  return (num*factorial(num - 1));
}

double exponential(double x_deg,int n){
  double x = x_deg*(M_PI/180);
  double result = 0.0;
  for(int i=1;i<n;i++){
    result+=pow(x,i)/factorial(i);
  }
  return result;
}         

int main(){
  double x;
  int n=5; //Gets most precise value

  printf("Enter the value of x: ");
  scanf("%lf",&x);
  
  double result=exponential(x,n);
  printf("e^%lf is approximately: %lf\n",x,result);

  return 0;
}