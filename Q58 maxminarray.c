/* Q58 - Find the maximum and minimum element in an array */
#include<stdio.h>
int main(){
int a,b,c[100],i,d;
printf("Enter a number:");
scanf("%d",&a);
printf("Enter array elements:");
for(i=0;i<a;i++){
scanf("%d",&c[i]);
}
b=c[0];
d=c[0];
for(i=1;i<a;i++){
if(c[i]>b)b=c[i];
if(c[i]<d)d=c[i];
}
printf("Max=%d, Min=%d",b,d);
return 0;
}

