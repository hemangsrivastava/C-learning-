/* Q73 - Find the sum of each row of a matrix and store it in an array */
#include<stdio.h>
int main(){
int a,b,c[100][100],i,j,d[100];
printf("Enter number of rows and columns:");
scanf("%d%d",&a,&b);
printf("Enter matrix elements:");
for(i=0;i<a;i++){
for(j=0;j<b;j++){
scanf("%d",&c[i][j]);
}
}
for(i=0;i<a;i++){
d[i]=0;
for(j=0;j<b;j++){
d[i]=d[i]+c[i][j];
}
}
for(i=0;i<a;i++){
printf("%d ",d[i]);
}
return 0;
}


