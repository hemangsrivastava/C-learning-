/* Q83 - Count vowels and consonants in a string */
#include<stdio.h>
int main(){
char a[100];
int i,b,c;
printf("Enter a string:");
scanf("%s",a);
b=0;
c=0;
for(i=0;a[i]!='\0';i++){
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')b++;
else c++;
}
printf("Vowels=%d, Consonants=%d",b,c);
return 0;
}

