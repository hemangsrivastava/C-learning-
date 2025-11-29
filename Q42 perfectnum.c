/* Q42 - Check if a number is a perfect number */
#include<stdio.h>
int main(){
int a,b,i;
printf("Enter a number:");
scanf("%d",&a);
b=0;
for(i=1;i<a;i++){
if(a%i==0)b=b+i;
}
if(b==a)
printf("Perfect number");
else
printf("Not perfect number");
return 0;
}

