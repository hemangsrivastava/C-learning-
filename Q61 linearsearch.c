/* Q61 - Linear search in an array */
#include<stdio.h>
int main(){
int a,b,c[100],i,d;
printf("Enter a number:");
scanf("%d",&a);
printf("Enter array elements:");
for(i=0;i<a;i++){
scanf("%d",&c[i]);
}
printf("Enter element to search:");
scanf("%d",&b);
d=-1;
for(i=0;i<a;i++){
if(c[i]==b){
d=i;
break;
}
}
if(d==-1)printf("-1");
else printf("Found at index %d",d);
return 0;
}

