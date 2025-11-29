/* Q54 - Print centered star diamond pattern */
#include<stdio.h>
int main(){
int i,j,k;
for(i=1;i<=4;i++){
for(j=4;j>i;j--){
printf(" ");
}
for(k=1;k<=i*2-1;k++){
printf("*");
}
printf("\n");
}
for(i=3;i>=1;i--){
for(j=4;j>i;j--){
printf(" ");
}
for(k=1;k<=i*2-1;k++){
printf("*");
}
printf("\n");
}
return 0;
}

