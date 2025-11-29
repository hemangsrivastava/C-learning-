/* Q77 - Check if the elements on the diagonal of a matrix are distinct */
#include<stdio.h>
int main(){
int a,b,c[100][100],i,j,d,e[100];
printf("Enter number of rows and columns:");
scanf("%d%d",&a,&b);
printf("Enter matrix elements:");
for(i=0;i<a;i++){
for(j=0;j<b;j++){
scanf("%d",&c[i][j]);
}
}
d=1;
for(i=0;i<a;i++){
e[i]=c[i][i];
}
for(i=0;i<a;i++){
for(j=i+1;j<a;j++){
if(e[i]==e[j]){
d=0;
break;
}
}
if(d==0)break;
}
if(d==1)printf("True");
else printf("False");
return 0;
}

