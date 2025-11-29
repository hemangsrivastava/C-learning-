/* Q91 - Remove all vowels from a string */
#include<stdio.h>
int main(){
char a[100];
int i,j;
printf("Enter a string:");
scanf("%s",a);
for(i=0;a[i]!='\0';i++){
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
for(j=i;a[j]!='\0';j++){
a[j]=a[j+1];
}
i--;
}
}
printf("%s",a);
return 0;
}

