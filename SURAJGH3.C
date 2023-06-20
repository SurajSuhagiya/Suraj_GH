// Write C program to find the third angle of triangle if two other angles are given.
#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c;

clrscr();
printf("first angle :");
scanf("%d",&a);
printf("second angle :");
scanf("%d",&b);
c = 100 - (a+b);
printf("third angle :%d",c);
getch();
}