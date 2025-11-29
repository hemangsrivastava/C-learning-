/* Q71 - Read and print a matrix */
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
for(i=0;i<a;i++){
for(j=0;j<b;j++){
printf("%d ",c[i][j]);
}
printf("\n");
}
return 0;
}

