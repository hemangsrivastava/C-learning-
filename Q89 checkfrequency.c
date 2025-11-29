/* Q89 - Count frequency of a given character in a string */
#include<stdio.h>
int main(){
char a[100],b;
int i,c;
printf("Enter a string:");
scanf("%s",a);
printf("Enter character to search:");
scanf(" %c",&b);
c=0;
for(i=0;a[i]!='\0';i++){
if(a[i]==b)c++;
}
printf("%d",c);
return 0;
}

