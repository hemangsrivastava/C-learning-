/* Q88 - Replace spaces with hyphens in a string */
#include<stdio.h>
int main(){
char a[100];
int i;
printf("Enter a string:");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++){
if(a[i]==' ')a[i]='-';
}
printf("%s",a);
return 0;
}

