
/*Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/
#include <stdio.h>
int main(){
int a,b,c;
printf("enter first value");
scanf("%d",&a);
printf("enter second value");
scanf("%d",&b);
c=2*(a+b);
printf("perimeter is: %d\n",c);
c=a*b;
printf("area is: %d\n",c);
}


