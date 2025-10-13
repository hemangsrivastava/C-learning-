/*Write a program to find profit or loss percentage given cost price and selling price.*/

#include <stdio.h>
int main(){
float a,b,c,d;
printf("enter the cost price and selling price");
scanf("%f%f",&a,&b);
if(a>b){
c=a-b;
d=(c/a)*100;
printf("Loss %f",d);}
else if (b>a){
c=b-a;
d=(c/a)*100;
printf("Profit %f",d);}
else
printf("No profit No loss");
return 0;
}
