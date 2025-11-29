/* Q84 - Convert a lowercase string to uppercase without using built-in functions */
#include<stdio.h>
int main(){
char a[100];
int i;
printf("Enter a string:");
scanf("%s",a);
for(i=0;a[i]!='\0';i++){
if(a[i]>='a'&&a[i]<='z')a[i]=a[i]-32;
}
printf("%s",a);
return 0;
}

