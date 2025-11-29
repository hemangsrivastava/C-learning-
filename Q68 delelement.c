/* Q68 - Delete an element from an array */
#include<stdio.h>
int main(){
int a,b,c[100],i,j;
printf("Enter a number:");
scanf("%d",&a);
printf("Enter array elements:");
for(i=0;i<a;i++){
scanf("%d",&c[i]);
}
printf("Enter position to delete:");
scanf("%d",&b);
for(i=b;i<a-1;i++){
c[i]=c[i+1];
}
for(i=0;i<a-1;i++){
printf("%d ",c[i]);
}
return 0;
}

