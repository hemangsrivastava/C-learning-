/*Q38-Sumofdigitsofanumber*/
#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the number:");
scanf("%d",&a);
c=0;
while(a>0){
b=a%10;
c=c+b;
a=a/10;
}
printf("%d",c);
return 0;
}

