//11. Implement a program using structure and Union.
//(use Rollno, Name,age) & also print size of structure and Union.

#include<stdio.h>
#include<string.h>


struct student{
    int Roll,Age;
    char Name[30];
};

union Question{
    int Roll,Age;
    char Name[30];
};

int main()
{
    struct student std;
    union Question std1;

    //Taking input - 
    printf("Name of Student: ");
    scanf("%s",&std.Name);
    printf("Roll Number: ");
    scanf("%d",&std.Roll);
    printf("Age: ");
    scanf("%d",&std.Age);
    strcpy(std1.Name,std.Name);
    std1.Age = std.Age;
    std1.Roll = std.Roll;
    
    //Printing Data
    printf("\nPrinting Union Values -\nName: %s\nRoll Number: %d\nAge: %d",std.Name,std.Roll,std.Age);
    printf("\nPrinting Structure Values -\nName: %s\nRoll Number: %d\nAge: %d",std1.Name,std1.Roll,std1.Age);

    printf("\n\nStructure Size: %d\nUnion Size: %d",sizeof(std),sizeof(std1));
}
