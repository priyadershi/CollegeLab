//13. Define Macros ot perform Arithmetic Operation

#include<stdio.h>
#define add(a,b) (a+b)
#define sub(a,b) (a-b)
#define mul(a,b) (a*b)
#define div(a,b) (a/b)

int main()
{
    int a,b,c,ch;
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n\t\tEnter Your choice: ");
    scanf("%d",&ch);
    printf("\nEnter Two Numbers: ");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case 1: c = add(a,b);
        printf("sum of %d and %d :  %d",a,b,c);
        break;
        case 2: c = sub(a,b);
        printf("Subtraction of %d and %d :  %d",a,b,c);
        break;
        case 3: c = mul(a,b); 
        printf("Multiplication of %d and %d :  %d",a,b,c);
        break;
        case 4: c = div(a,b);
        printf("Division of %d and %d :  %d",a,b,c);
        break;
        default: printf("Invalid choice!");
    }
}