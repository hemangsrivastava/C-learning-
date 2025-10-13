/*Write a program to reverse a given number.*/
#include <stdio.h>
int main(){
int a,b,c;
printf("entert the number");
scanf("%d",&a);
while(a!=0){
b=a%10;
c=c*10+b;
a=a/10;}
printf("The reversed number is: %d",c);
return 0;
}

