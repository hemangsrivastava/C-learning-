/* Q56 - Read and print elements of a one-dimensional array */
#include<stdio.h>
int main(){
int a,b,c[100],i;
printf("Enter a number:");
scanf("%d",&a);
for(i=0;i<a;i++){
scanf("%d",&c[i]);
}
for(i=0;i<a;i++){
printf("%d ",c[i]);
}
return 0;
}

