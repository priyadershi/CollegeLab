//12. Create you own header file and include it in your Main File

#include<stdio.h>
#include"Pankaj.h"

int main()
{
    int a,b,ch;
    printf("1. Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication");
    printf("4. Division\n");
    printf("\n\tEnter Your choice: ");
    scanf("%d",&ch);
    printf("Enter First and Second Number: ");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case 1: add(a,b); break;
        case 2: sub(a,b); break;
        case 3: mul(a,b); break;
        case 4: div(a,b); break;
        default: printf("Invalid choice");
    }

    return 0;
}