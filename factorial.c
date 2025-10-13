/*Write a program to calculate the factorial of a number.*/
#include <stdio.h>
int main(){
int a=1,n,i;
printf("enter the number whose factorial is to be found: ");
scanf("%d",&n);
for (i=1;i<=n;i++){
a=a*i;}
printf("The factorial is: %d",a);
return 0;
}
