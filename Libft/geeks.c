#include <stdio.h>
#include <string.h>
int main()
{
    char src[] = "geeksforgeeks";
    char dest[3];
    strcpy(dest, src);
    printf("Copied string: %s\n", dest);
    return 0;
}
