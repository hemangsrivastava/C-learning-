/* Q94 - Find the longest word in a sentence */
#include<stdio.h>
int main(){
char a[200],b[200];
int i,j,c,d;
printf("Enter a string:");
scanf("%[^\n]s",a);
c=0;
d=0;
j=0;
for(i=0;a[i]!='\0';i++){
if(a[i]==' '){
b[j]='\0';
if(j>d){
d=j;
for(j=0;j<=d;j++){
b[j]=b[j];
}
}
j=0;
}
else{
b[j]=a[i];
j++;
}
}
b[j]='\0';
if(j>d){
d=j;
}
printf("%s",b);
return 0;
}

