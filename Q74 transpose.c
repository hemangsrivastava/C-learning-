/* Q74 - Find the transpose of a matrix */
#include<stdio.h>
int main(){
int a,b,c[100][100],i,j;
printf("Enter number of rows and columns:");
scanf("%d%d",&a,&b);
printf("Enter matrix elements:");
for(i=0;i<a;i++){
for(j=0;j<b;j++){
scanf("%d",&c[i][j]);
}
}
for(i=0;i<b;i++){
for(j=0;j<a;j++){
printf("%d ",c[j][i]);
}
printf("\n");
}
return 0;
}

