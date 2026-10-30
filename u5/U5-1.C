// 1. Write a program to find out addition of two values using UDF. 

#include<stdio.h>
#include<conio.h>

int add(int x,int y);

int add(int x, int y){
    return x+y;
}

void main(){
    int a,b,sum;
    clrscr();
    printf("\nEnter Two Numbers:");
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    printf("\nAddition is: %d",sum);
    getch();
}