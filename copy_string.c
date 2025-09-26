#include <stdio.h>

#include <string.h>


 void copy(char *p1, char*p2)
{
    char *start = p2;
  
    while(*p1!='\0')
    {
        *p2 = *p1;
        p1++;
        p2++;
    }
    
    *p2='\0';
    
    printf("%s",start);
}

int main() 
{
    char s1[]="Sailesh";
    
    int n = strlen(s1);
    
    char s2[n+1];
    
    copy(s1,s2);
    
    return 0;
}
