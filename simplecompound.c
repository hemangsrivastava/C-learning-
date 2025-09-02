/*Write a program to calculate simple and compound interest for given principal, rate, and time.*/
#include <stdio.h>
int main(){
float a,b,c,d,e,f;
int i;
printf("enter principal");
scanf("%f",&a);
printf("enter rate");
scanf("%f",&b);
printf("enter time");
scanf("%f",&c);
d=a*b*c/100;
printf("the simple interest is: %f\n",d);
e=a;
for (i=0;i<c;i++){
e=e*(1+b/100);
}
f=e-a;
printf("the compound interest is: %f\n",f);
}



