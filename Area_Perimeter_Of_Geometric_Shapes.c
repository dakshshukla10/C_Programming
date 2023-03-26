/*Surface Area , Volume and Perimeter Of Geometric Shapes
Created By: Daksh Shukla,IT Student at Manipal Instiute Of Technology,Manipal
25th March,2023*/

#include<stdio.h> //Preprocessor Code
#define PI 3.14159 // PI is a constant value hence it is better to define it to 1.Save time 2.Prevent Errors 3.Code Readability 

int main()
{
    char name[100];
    int choice_1,_2dshape,_3dshape;
    float length,breadth,SA,perimeter;
    printf("What should we call you?\n>>");
    scanf("%s",name);
    printf("Hello %s :)\nThis Program will help you calculate the SA ,Volume and Perimeter of your geometric shapes!\nInput your choice below:\n",name);
    printf("What Shapes are we looking at?\n(1)2 Dimensional (2)3 Dimensional\n>>");
    scanf("%d",&choice_1);
    
    if(choice_1==1)
    {
        printf("Which Shape's Area and Perimeter do you want to find out?\n1.Square 2.Rectangle 3.General Quadilateral 4.Rhombus 5.Parallelogram 6.Kite 7.Trapezium\n>>");
        scanf("%d",&_2dshape);
        if(_2dshape==1)
        switch(_2dshape){
            case 1:{
                printf("You chose square\nThe perimeter of square is 2*(length+breadth) and area of square is length*breadth\nEnter the values of length and breadth below:\n>>");
                scanf("%f%f",&length,&breadth);
                perimeter = 2*(length+breadth);
                printf("The Perimeter of Square is %f untis\n",perimeter);
                SA = length*breadth;
                printf("The Area of Square is:%f units\n",SA);
            }
        }
    }

}
