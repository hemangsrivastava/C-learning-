/* Q92 - Find the first repeating lowercase alphabet in a string */
#include<stdio.h>
int main(){
char a[100];
int i,b[26]={0};
printf("Enter a string:");
scanf("%s",a);
for(i=0;a[i]!='\0';i++){
b[a[i]-'a']++;
if(b[a[i]-'a']>1){
printf("%c",a[i]);
return 0;
}
}
printf("No repeating character");
return 0;
}

