/* Q64 - Find the digit that occurs the most times in an integer number */
#include<stdio.h>
int main(){
int a,b,c[10],i,d,e;
printf("Enter a number:");
scanf("%d",&a);
for(i=0;i<10;i++){
c[i]=0;
}
b=a;
while(b>0){
d=b%10;
c[d]++;
b=b/10;
}
e=0;
for(i=1;i<10;i++){
if(c[i]>c[e])e=i;
}
printf("%d",e);
return 0;
}

