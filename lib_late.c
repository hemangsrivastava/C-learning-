/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ?2/day 
Next 5 days late: ?4/day 
Next 20 days days late: ?6/day 
More than 30 days: Membership Cancelled.*/

#include <stdio.h>
int main(){
int a,b;
printf("Enter the days");
scanf("%d",&a);
if (a>0 && a<=5){
b=2*a;
printf("Fine %d",b);}
else if(a>5 && a<=10){
b=(5*2)+(a-5)*4;
printf("Fine %d",b);}
else if (a>10 && a<=30){
b=(5*2)+(5*4)+(a-10)*6;
printf("Fine %d",b);}
else
printf("Membership Cancel");
return 0;
}
