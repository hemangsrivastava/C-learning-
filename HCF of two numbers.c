/*Write a program to find the HCF (GCD) of two numbers.*/
#include <stdio.h> 
int main(){
int a,b,i,hcf=1;
printf("enter the first number: "); 
scanf("%d",&a); 
printf("enter the second number: "); 
scanf("%d",&b); 
for (i=1;i<=a && i<=b;i++){ 
if ((a % i == 0) && (b % i ==0)){ 
hcf=i; }} 
printf("HCF of %d and %d are: %d",a,b,hcf); 
return 0; }
