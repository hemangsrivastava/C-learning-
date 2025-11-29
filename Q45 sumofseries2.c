/* Q45 - Sum of the series 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms */
#include<stdio.h>
int main(){
int a,i;
float b;
printf("Enter a number:");
scanf("%d",&a);
b=0;
for(i=1;i<=a;i++){
b=b+( (2*i)/(float)(4*i-1) );
}
printf("Approximate sum: %.2f",b);
return 0;
}

