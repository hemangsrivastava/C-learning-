/* Q43 - Check if a number is a strong number */
#include<stdio.h>
int main(){
int a,b,c,d,e,f,i;
printf("Enter a number:");
scanf("%d",&a);
b=a;
c=0;
while(b>0){
d=b%10;
e=1;
for(i=1;i<=d;i++){
e=e*i;
}
c=c+e;
b=b/10;
}
if(c==a)
printf("Strong number");
else 
printf("Not strong number");
return 0;
}

