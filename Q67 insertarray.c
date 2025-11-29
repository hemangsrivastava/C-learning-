/* Q67 - Insert an element in an array at a given position */
#include<stdio.h>
int main(){
int a,b,c[100],i,j,d;
printf("Enter a number:");
scanf("%d",&a);
printf("Enter array elements:");
for(i=0;i<a;i++){
scanf("%d",&c[i]);
}
printf("Enter position and element:");
scanf("%d%d",&b,&d);
for(i=a;i>b;i--){
c[i]=c[i-1];
}
c[b]=d;
for(i=0;i<=a;i++){
printf("%d ",c[i]);
}
return 0;
}

