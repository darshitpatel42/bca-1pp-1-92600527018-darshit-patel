// 13. Input Three Values from user and Find Maximum. 

#include<stdio.h>
#include<conio.h>

void main(){
    int x,y,z;
    clrscr();
    printf("\nEnter Number 1:");
    scanf("%d",&x);
    printf("\nEnter Number 2:");
    scanf("%d",&y);
    printf("\nEnter Number 3:");
    scanf("%d",&z);
    if(x>y && x>z){
        printf("Number 1: %d, is maximum", x);
    }
    else if(y>x && y>z){
        printf("Number 2: %d, is maximum", y);
    }
    else
        printf("Number 3: %d, is maximum", z);
    getch();
}