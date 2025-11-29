/* Q41 - Swap the first and last digit of a number */
#include<stdio.h>
int main(){
int a,b,c,d,e;
printf("Enter a number:");
scanf("%d",&a);
if(a>=0&&a<10){
printf("%d",a);
return 0;
}
b=a;
c=1;
while(b>=10){
b=b/10;
c=c*10;
}
d=a%10;
e=(a%c)/10;
a=d*c+e*10+b;
printf("%d",a);
return 0;
}

