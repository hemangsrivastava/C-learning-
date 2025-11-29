/* Q59 - Count even and odd numbers in an array */
#include<stdio.h>
int main(){
int a,b,c[100],i,d;
printf("Enter a number:");
scanf("%d",&a);
printf("Enter array elements:");
b=0;
d=0;
for(i=0;i<a;i++){
scanf("%d",&c[i]);
}
for(i=0;i<a;i++){
if(c[i]%2==0)b++;
else d++;
}
printf("Even=%d, Odd=%d",b,d);
return 0;
}

