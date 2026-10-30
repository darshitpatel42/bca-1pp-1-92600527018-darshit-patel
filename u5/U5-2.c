// 2. Write a program to find out factorial of number using UDF. 

#include<stdio.h>
#include<conio.h>

int fact(int n);

int fact(int n){
    int i,fact = 1;
    for (i = 1; i <= n; i++) {
        fact*=i;
    }
    return fact;
}

void main(){
    int x,fac;
    clrscr();
    printf("\nEnter Number:");
    scanf("%d",&x);
    fac=fact(x);
    printf("\nFactorial is: %d",fac);
    getch();
}