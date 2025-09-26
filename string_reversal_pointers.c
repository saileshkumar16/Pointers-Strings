#include <stdio.h>
#include <string.h>

void reverseString(char *s) 
{
    int n = strlen(s);   
    char temp;

    for (int i = 0; i < n/2; i++) 
    {
        
        temp = *(s + i);
        *(s + i) = *(s + (n - 1 - i));
        *(s + (n - 1 - i)) = temp;
    }
}

int main()
{
    char str[] = "Sailesh";
    printf("Original: %s\n", str);

    reverseString(str);

    printf("Reversed: %s\n", str);

    return 0;
}
