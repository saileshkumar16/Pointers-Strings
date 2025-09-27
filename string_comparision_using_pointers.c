#include <stdio.h>


int stringcomp(const char *p1,const char *p2)
{
    while(*p1!='\0' && *p2!='\0') //either of the string ends come out of the loop
    {
        if(*p1!=*p2) //mismatch
        {
            return *p1 - *p2;
        }
        
        p1++;
        p2++;
    }
    
    return *p1 - *p2;
}

int main() 
{
    
    const char *s1="sai";
    const char *s2="kai";
    
   int res = stringcomp(s1,s2);
   
   if(res==0)
   printf("Strings are equal");
   else if(res<0)
   printf("String 1 is smaller");
   else
   printf("String 1 is bigger");

    return 0;
}
