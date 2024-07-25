#include <stdio.h>
#include <string.h> // The C lang include a library to manipulate strings, <string.h>. and there's a function to count characters.

int main() {
    
    char array [] = { 'p', 'e', 'd', 'r', 'o', '-', 'b', 'a', 's', 's', 'a', 'n', 'i', '\0'};
    
    printf("%d\n", strlen(array));
    
    return 0;
}