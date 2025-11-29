/* Q86 - Check if a string is a palindrome */
#include<stdio.h>
int main(){
char a[100],b;
int i,j;
printf("Enter a string:");
scanf("%s",a);
for(i=0;a[i]!='\0';i++);
i--;
j=0;
while(j<i){
if(a[j]!=a[i]){
printf("Not palindrome");
return 0;
}
j++;
i--;
}
printf("Palindrome");
return 0;
}

