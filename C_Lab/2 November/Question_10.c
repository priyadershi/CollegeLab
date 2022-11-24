//10. Perform Operation on string using pointers and library function.

#include<stdio.h>
#include<string.h>

int main()
{
    char *p,str[20],str1[20],rev[20];
    int n;
    p=str;
    printf("Enter a String: ");
    scanf("%s",p);
    strcpy(str1,p);
    strcpy(rev,p);
    strrev(rev);
    n=strlen(str1);
    printf("String: %s\nReversed String: %s\nLength: %d",str1,rev,n);

    return 0;
}