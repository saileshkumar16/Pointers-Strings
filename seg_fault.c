#include <stdio.h>

int main() 
{
    char *s = "sailesh";   // "sailesh" is a string literal.
                           // Stored in read-only (.rodata) section.
                           //
                           // ⚠️ BUT in C, string literals have type: const char[].
                           // For backward compatibility with old C (pre-ANSI),
                           // compilers allow assignment to 'char *'.
                           // This is why it COMPILES without error.
                           // (In C++, this would be a compile-time error.)

    s[0] = 'k';            // ❌ Attempting to modify read-only memory.
                           // Compiler *thinks* s points to writable chars,
                           // so it allows it.
                           // At runtime, OS traps the illegal write → segfault.

    printf("%s", s);       // Never reached (program already crashed).

    return 0;              // Not executed.
}
