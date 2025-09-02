/*Write a program to input a year and check whether it is a leap year or not using conditional statements.*/
#include<stdio.h>
int main(){
int a;
printf("enter the year to be checked:");
scanf("%d",&a);
if((a%4==0) && (a%100!=0)){
printf("leap year");}
else{printf("not a leap year");
}
}
