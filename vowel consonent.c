/*Write a program to input a character and check whether it is a vowel or consonant using if–else*/
#include<stdio.h>
int main(){
char a;
printf("enter the character to be checked");
scanf("%c",&a);
if((a>='a' && a<='z') || (a>='A' && a<='z')) {
if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' ||a=='O'||a=='U'){
printf("vowel");}
else{printf("consonent");
}
}
}
