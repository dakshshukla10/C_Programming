#include <stdio.h>
#include <math.h>

  double factorial(int number){
    double fact=1;
    for(int i =1;i<=number;i++){
      fact*=i;
    }
    return fact;
  }

double sinx(double x,int term){
  double sin_val=0.0;

  x=x*(3.14/180.0);

  for(int i=0;i<term;i++){
    double term = pow(-1,i)*pow(x,2*i+1)/factorial(2*i+1);
    sin_val+=term;
  }
  return sin_val;
}

//Driving code
int main(){
  double x;
  int terms=5; //5 or < is the most precise

  printf("Enter the value of x(in degrees):");
  scanf("%lf",&x);

  printf("sin(%lf)=%lf\n",x,sinx(x,terms));
}