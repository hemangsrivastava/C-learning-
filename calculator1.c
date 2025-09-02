
/*Write a program to input two numbers and display their sum, difference, product, and quotient.*/
#include <stdio.h>
int main(){
int a,b,c;
printf("enter first value");
scanf("%d",&a);
printf("enter second value");
scanf("%d",&b);
c=a+b;
printf("sum is: %d\n",c);
if (a>b){c=a-b;}
else{c=b-a;}
printf("difference is: %d\n", c);
c=a*b;
printf("product is: %d\n",c);
if(b!=0){c=a/b;
printf("quotient is: %d\n",c);}
else{printf("not defined");}
}


