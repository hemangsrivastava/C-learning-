/* Q93 - Check if two strings are anagrams of each other */
#include<stdio.h>
int main(){
char a[100],b[100];
int c[26],d[26],i;
printf("Enter first string:");
scanf("%s",a);
printf("Enter second string:");
scanf("%s",b);
for(i=0;i<26;i++){
c[i]=0;
d[i]=0;
}
for(i=0;a[i]!='\0';i++){
c[a[i]-'a']++;
}
for(i=0;b[i]!='\0';i++){
d[b[i]-'a']++;
}
for(i=0;i<26;i++){
if(c[i]!=d[i]){
printf("Not anagrams");
return 0;
}
}
printf("Anagrams");
return 0;
}

