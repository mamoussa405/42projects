#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void)
{
    useconds_t time = 1e6;

    usleep(time);
    printf("done\n");
    return 0;
}
