/* Q80 - Multiply two matrices */
#include<stdio.h>
int main(){
int a,b,c[100][100],d,e,f[100][100],g[100][100],i,j,k;
printf("Enter number of rows and columns:");
scanf("%d%d",&a,&b);
printf("Enter first matrix elements:");
for(i=0;i<a;i++){
for(j=0;j<b;j++){
scanf("%d",&c[i][j]);
}
}
printf("Enter number of rows and columns:");
scanf("%d%d",&d,&e);
printf("Enter second matrix elements:");
for(i=0;i<d;i++){
for(j=0;j<e;j++){
scanf("%d",&f[i][j]);
}
}
for(i=0;i<a;i++){
for(j=0;j<e;j++){
g[i][j]=0;
for(k=0;k<b;k++){
g[i][j]=g[i][j]+c[i][k]*f[k][j];
}
}
}
for(i=0;i<a;i++){
for(j=0;j<e;j++){
printf("%d ",g[i][j]);
}
printf("\n");
}
return 0;
}

