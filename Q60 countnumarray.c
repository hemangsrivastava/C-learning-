/* Q60 - Count positive negative and zero elements in an array */
#include<stdio.h>
int main(){
int a,b,c[100],i,d,e;
printf("Enter a number:");
scanf("%d",&a);
printf("Enter array elements:");
b=0;
d=0;
e=0;
for(i=0;i<a;i++){
scanf("%d",&c[i]);
}
for(i=0;i<a;i++){
if(c[i]>0)b++;
else if(c[i]<0)d++;
else e++;
}
printf("Positive=%d, Negative=%d, Zero=%d",b,d,e);
return 0;
}

