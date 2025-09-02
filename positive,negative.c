/*Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.*/
#include <stdio.h>
int main(){
int a;
printf("enter the number that is to be checked:");
scanf("%d",&a);
if(a!=0){
if(a<0){
printf("negative number");}
else{
printf("positve number");}}
else{
printf("number is zero");
}
}

