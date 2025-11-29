/* Q76 - Check if a matrix is symmetric */
#include<stdio.h>
int main(){
int a,b,c[100][100],i,j,d;
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
for(j=0;j<b;j++){
if(c[i][j]!=c[j][i]){
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

