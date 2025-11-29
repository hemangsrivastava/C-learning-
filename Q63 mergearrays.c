/* Q63 - Merge two arrays */
#include<stdio.h>
int main(){
int a,b,c[100],d[100],e[200],i,j;
printf("Enter a number:");
scanf("%d",&a);
printf("Enter first array elements:");
for(i=0;i<a;i++){
scanf("%d",&c[i]);
}
printf("Enter a number:");
scanf("%d",&b);
printf("Enter second array elements:");
for(i=0;i<b;i++){
scanf("%d",&d[i]);
}
for(i=0;i<a;i++){
e[i]=c[i];
}
for(j=0;j<b;j++){
e[a+j]=d[j];
}
for(i=0;i<a+b;i++){
printf("%d ",e[i]);
}
return 0;
}

