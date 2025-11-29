/* Q95 - Check if one string is a rotation of another */
#include<stdio.h>
int main(){
char a[100],b[100],c[200];
int i,j,len1,len2,flag;
printf("Enter first string:");
scanf("%s",a);
printf("Enter second string:");
scanf("%s",b);
len1=0;
len2=0;
for(i=0;a[i]!='\0';i++){
len1++;
}
for(i=0;b[i]!='\0';i++){
len2++;
}
if(len1!=len2){
printf("Not rotation");
return 0;
}
for(i=0;i<len1;i++){
c[i]=a[i];
}
for(i=0;i<len1;i++){
c[len1+i]=a[i];
}
c[2*len1]='\0';
flag=0;
for(i=0;i<=2*len1-len2;i++){
j=0;
while(j<len2&&c[i+j]==b[j]){
j++;
}
if(j==len2){
flag=1;
break;
}
}
if(flag==1)printf("Rotation");
else printf("Not rotation");
return 0;
}

