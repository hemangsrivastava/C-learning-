/* Q62 - Reverse an array without taking extra space */
#include<stdio.h>
int main(){
int a,b,c[100],i,d;
printf("Enter a number:");
scanf("%d",&a);
printf("Enter array elements:");
for(i=0;i<a;i++){
scanf("%d",&c[i]);
}
for(i=0;i<a/2;i++){
d=c[i];
c[i]=c[a-1-i];
c[a-1-i]=d;
}
for(i=0;i<a;i++){
printf("%d ",c[i]);
}
return 0;
}

