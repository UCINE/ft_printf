#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;

    p = malloc(3 * sizeof(int));
    p[0]= 1;
    p[1]= 2;
    printf("%d\n%d\n%d\n", p[0],p[1],p[2]);
    free(p);
}