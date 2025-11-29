/* Q85 - Reverse a string */
#include<stdio.h>
int main(){
char a[100],b;
int i,j;
printf("Enter a string:");
scanf("%s",a);
for(i=0;a[i]!='\0';i++);
i--;
for(j=0;j<i;j++){
b=a[j];
a[j]=a[i];
a[i]=b;
i--;
}
printf("%s",a);
return 0;
}

