/* Q40 - Ones complement of a binary number */
#include<stdio.h>
int main(){
char a[100];
int i;
printf("Enter a number:");
scanf("%s",a);
for(i=0;a[i]!='\0';i++){
if(a[i]=='0')
a[i]='1';
else a[i]='0';
}
printf("%s",a);
return 0;
}

