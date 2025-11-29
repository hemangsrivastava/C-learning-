/*Q37-LCMoftwonumbers*/
#include<stdio.h>
int main(){
int a,b,c;
scanf("%d%d",&a,&b);
c=a>b?a:b;
while(!(c%a==0&&c%b==0)){
c++;
}
printf("%d",c);
return 0;
}

