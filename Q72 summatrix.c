/* Q72 - Find the sum of all elements in a matrix */
#include<stdio.h>
int main(){
int a,b,c[100][100],i,j,d;
printf("Enter number of rows and columns:");
scanf("%d%d",&a,&b);
printf("Enter matrix elements:");
d=0;
for(i=0;i<a;i++){
for(j=0;j<b;j++){
scanf("%d",&c[i][j]);
}
}
for(i=0;i<a;i++){
for(j=0;j<b;j++){
d=d+c[i][j];
}
}
printf("%d",d);
return 0;
}

