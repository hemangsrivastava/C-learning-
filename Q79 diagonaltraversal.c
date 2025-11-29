/* Q79 - Perform diagonal traversal of a matrix */
#include<stdio.h>
int main(){
int a,b,c[100][100],i,j,k,d,e;
printf("Enter number of rows and columns:");
scanf("%d%d",&a,&b);
printf("Enter matrix elements:");
for(i=0;i<a;i++){
for(j=0;j<b;j++){
scanf("%d",&c[i][j]);
}
}
for(d=0;d<a+b-1;d++){
if(d%2==0){
i=d< a?d:a-1;
j=d-i;
while(i>=0&&j<b){
printf("%d ",c[i][j]);
i--;
j++;
}
}
else{
j=d< b?d:b-1;
i=d-j;
while(j>=0&&i<a){
printf("%d ",c[i][j]);
i++;
j--;
}
}
}
return 0;
}

