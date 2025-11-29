/* Q66 - Insert an element in a sorted array at the appropriate position */
#include<stdio.h>
int main(){
int a,b,c[100],i,j;
printf("Enter a number:");
scanf("%d",&a);
printf("Enter array elements:");
for(i=0;i<a;i++){
scanf("%d",&c[i]);
}
printf("Enter element to insert:");
scanf("%d",&b);
for(i=0;i<a;i++){
if(b<c[i])break;
}
for(j=a;j>i;j--){
c[j]=c[j-1];
}
c[i]=b;
for(i=0;i<=a;i++){
printf("%d ",c[i]);
}
return 0;
}

