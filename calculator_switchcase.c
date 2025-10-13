/*Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/

#include <stdio.h>
int main(){
int a,b,c;
char d;
printf("enter first value");
scanf("%d",&a);
printf("enter second value");
scanf("%d",&b);
printf("enter the operator");
scanf(" %c",&d);
switch (d){
case '+':
	printf("%d",a+b);
	break;
case '-':
	printf("%d",a-b);
	break;
case '*':
	printf("%d",a*b);
	break;
case '/':
	if(b!=0){
	printf("%d",a/b);}
	else{
	printf("Error");}
	break;
case '%':
	if(b!=0)
	printf("%d",a%b);
	else
    printf("Error");
	break;
	
default:
	printf("invalid operator");
	break;}
	return 0;
}
