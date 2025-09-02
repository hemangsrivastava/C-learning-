/*Write a program to swap two numbers using a third variable.*/
#include <stdio.h>
int main(){
int a,b,c;
printf("enter first value");
scanf("%d",&a);
printf("enter second value");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("after swap: %d %d\n",a,b);
}


