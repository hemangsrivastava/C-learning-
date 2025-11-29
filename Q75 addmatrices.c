/* Q75 - Add two matrices */
#include<stdio.h>
int main(){
int a,b,c[100][100],d[100][100],e[100][100],i,j;
printf("Enter number of rows and columns:");
scanf("%d%d",&a,&b);
printf("Enter first matrix elements:");
for(i=0;i<a;i++){
for(j=0;j<b;j++){
scanf("%d",&c[i][j]);
}
}
printf("Enter second matrix elements:");
for(i=0;i<a;i++){
for(j=0;j<b;j++){
scanf("%d",&d[i][j]);
}
}
for(i=0;i<a;i++){
for(j=0;j<b;j++){
e[i][j]=c[i][j]+d[i][j];
}
}
for(i=0;i<a;i++){
for(j=0;j<b;j++){
printf("%d ",e[i][j]);
}
printf("\n");
}
return 0;
}

