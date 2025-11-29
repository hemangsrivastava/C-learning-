/* Q87 - Count spaces digits and special characters in a string */
#include<stdio.h>
int main(){
char a[100];
int i,b,c,d;
printf("Enter a string:");
scanf("%[^\n]s",a);
b=0;
c=0;
d=0;
for(i=0;a[i]!='\0';i++){
if(a[i]==' ')b++;
else if(a[i]>='0'&&a[i]<='9')c++;
else if(!(a[i]>='A'&&a[i]<='Z')&&!(a[i]>='a'&&a[i]<='z'))d++;
}
printf("Spaces=%d, Digits=%d, Special=%d",b,c,d);
return 0;
}

