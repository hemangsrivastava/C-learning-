/*Write a program to print the sum of the first n odd numbers.*/
#include <stdio.h>
int main(){
int i,n,a=0;
printf("enter the numebr");
scanf("%d",&n);
for(i=1;i<=n;i++){
if(i%2!=0){
a=a+i;}}
printf("The sum of odd numbers: %d",a);
return 0;
}
