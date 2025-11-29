/* Q44 - Sum of the series 1 + 3/4 + 5/6 + 7/8 + ... up to n terms */
#include<stdio.h>
int main(){
int a,i;
float b,c;
printf("Enter a number:");
scanf("%d",&a);
b=1;
c=1;
for(i=2;i<=a;i++){
b=b+( (2*i-1)/(float)(2*i) );
}
printf("sum: %.2f",b);
return 0;
}

