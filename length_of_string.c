#include <stdio.h>


int stringlen(char *p)
{
    char *start = p;
    
    while(*p!='\0')
    {
        p++;
    }
    
    return p-start;
}

int main() 
{
    char s1[]="Sailesh";
    
    int len = stringlen(s1);
    
    printf("The length of the string is %d",len);

    return 0;
}
