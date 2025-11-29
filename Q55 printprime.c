/* Q55 - Print all prime numbers from 1 to n */
#include<stdio.h>
int main(){
int a,b,i,j;
printf("Enter a number:");
scanf("%d",&a);
for(i=2;i<=a;i++){
b=0;
for(j=1;j<=i;j++){
if(i%j==0)b++;
}
if(b==2)printf("%d ",i);
}
return 0;
}

