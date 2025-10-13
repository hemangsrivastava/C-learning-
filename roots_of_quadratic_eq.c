/*Write a program to find the roots of a quadratic equation and categorize them.*/

#include <stdio.h>
#include <math.h>
int main(){
int a,b,c,d=0,x=0,y=0;
printf("enter the first number");
scanf("%d",&a);
printf("enter the second number");
scanf("%d",&b);
printf("enter the third number");
scanf("%d",&c);
d=(b*b)-4*a*c;
if (d>0){
x=((-b)+(sqrt(d)))/2*a;
y=((-b)-(sqrt(d)))/2*a;
printf("the roots are real and different: %d%d\n",x,y);}
else if (d==0){
x=((-b)+(sqrt(d)))/2*a;
printf("the roots are real and same: %d\n",x);}
else
{printf("the roots are not real");}
return 0;}

