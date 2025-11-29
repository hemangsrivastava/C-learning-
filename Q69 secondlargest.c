/* Q69 - Find the second largest element in an array */
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
d=-1000000;
for(i=1;i<a;i++){
if(c[i]>b){
d=b;
b=c[i];
}
else if(c[i]>d&&c[i]!=b){
d=c[i];
}
}
printf("%d",d);
return 0;
}

