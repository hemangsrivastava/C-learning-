/*Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.*/

#include <stdio.h>
int main(){
int a,b,c;
printf("enter the length of first side");
scanf("%d",&a);
printf("enter the length of second side");
scanf("%d",&b);
printf("enter the length of third side");
scanf("%d",&c);
if (a+b>c && b+c>a && a+c>b){

if (a==b && b==c)
printf("equilateral triangle");
else if (a==b || a==c || b==c)
printf("isosceles triangle");
else
printf("scalene triangle");}
else 
printf("not a valid triangle");
return 0;}

