/* Q70 - Rotate an array to the right by k positions */
#include<stdio.h>
int main(){
int a,b,c[100],i,j,d;
printf("Enter a number:");
scanf("%d",&a);
printf("Enter array elements:");
for(i=0;i<a;i++){
scanf("%d",&c[i]);
}
printf("Enter rotation value:");
scanf("%d",&b);
b=b%a;
for(i=0;i<b;i++){
d=c[a-1];
for(j=a-1;j>0;j--){
c[j]=c[j-1];
}
c[0]=d;
}
for(i=0;i<a;i++){
printf("%d ",c[i]);
}
return 0;
}

