#include <stdio.h>

void concat(char *s1, char *s2) 
{
    char *start = s1;
    
    while(*s1!='\0')
    {
        s1++;
    }
    
    while(*s2!='\0')
    {
        *s1 = *s2;
        s2++;
        s1++;
    }
    
    *s1='\0';
    
    printf("%s",start);

}

int main()
{
    char str1[20] = "Hello";  
    char str2[] = "World!";

    concat(str1, str2);

    return 0;
}
