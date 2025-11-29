/* Q65 - Binary search in a sorted array */
#include<stdio.h>
int main(){
int a,b,c[100],i,j,d;
printf("Enter a number:");
scanf("%d",&a);
printf("Enter array elements:");
for(i=0;i<a;i++){
scanf("%d",&c[i]);
}
printf("Enter element to search:");
scanf("%d",&b);
i=0;
j=a-1;
d=-1;
while(i<=j){
int k=(i+j)/2;
if(c[k]==b){
d=k;
break;
}
else if(c[k]>b)j=k-1;
else i=k+1;
}
if(d==-1)printf("-1");
else printf("Found at index %d",d);
return 0;
}

