/*Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/

#include <stdio.h>
int main(){
int a,b,c;
printf("enter the time in seconds:");
scanf("%d",&a);
b=a/3600;
a=a%3600;
c=a/60;
a=a%60;
printf("the time is: %d %d %d \n",b,c,a);
}
