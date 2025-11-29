/* Q81 - Count characters in a string without using built-in length functions */
#include<stdio.h>
int main(){
char a[100];
int i;
printf("Enter a string:");
scanf("%s",a);
i=0;
while(a[i]!='\0'){
i++;
}
printf("%d",i);
return 0;
}

