
//14. Implement a program using enum

#include<stdio.h>

    enum Month{january=1, february, march, april, may, june, july, august, septmber, october, november, december};


int main()
{
    char monthName[12][10]={"January","February", "March", "April", "May", "June", "July", "August", "Septmber", "October", "November", "December"};  
    printf("\n\nMonth\t\t\tMonth Number");
    for(int i=january;i<=december;i++)
        printf("\n%s\t\t\t%d",monthName[i-1],i);

    return 0;
}