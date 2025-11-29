/* Q57 - Find the sum of array elements */
#include<stdio.h>
int main(){
int a,b,c[100],i;
printf("Enter a number:");
scanf("%d",&a);
b=0;
for(i=0;i<a;i++){
scanf("%d",&c[i]);
}
for(i=0;i<a;i++){
b=b+c[i];
}
printf("%d",b);
return 0;
}


