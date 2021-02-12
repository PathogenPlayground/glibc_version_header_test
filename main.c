#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Hello, world!\n");
    char* some_memory = (char*)malloc(1024);
    strcpy(some_memory, "This is a test of the emergency boardcast system!");
    printf("%s\n", some_memory);
    free(some_memory);

    // expf changed in glibc 2.27, so this won't work on older systems if we didn't properly link against the older glibc version
    printf("expf(3226.f) = %f\n", expf(3226.f));

    return 0;
}
