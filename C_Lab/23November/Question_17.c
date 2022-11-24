//17. Implement a file handling program to create Read, Write and Append a Simple Text.

#include<stdio.h>
int main()
{
    FILE *p;
    int num;
    char str[100];
    p=fopen("C:/Users/Pankaj/Desktop/myfile.txt","r");
    if(p==NULL)
    {
        printf("File Not Opened");
        exit(0);
    }
    
    //Writing to File
    scanf("%[^\n]s",str);
    
}