/*Write a program to print the product of even numbers from 1 to n.*/
#include <stdio.h>
int main(){
int i,n,a=1;
printf("enter the numebr");
scanf("%d",&n);
for(i=1;i<=n;i++){
if(i%2==0){
a=a*i;}}
printf("The product of even numbers: %d",a);
return 0;
}
