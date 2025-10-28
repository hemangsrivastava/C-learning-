/*Write a program to check if a number is an Armstrong number.*/
#include <stdio.h>
int main(){
int a,x,b=0,c; 
printf("enter the number");
scanf("%d",&a);
x = a;
while (a!=0){
c=(a%10);
b=b+(c*c*c);
a=a/10;}
if (b==x){
printf("armstrong number");}
else {
printf("not armstrong number");}
return 0;}
