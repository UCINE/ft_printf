#include <stdlib.h>
#include <stdio.h>
int main()
{
    int n,T = 0;
    printf("Enter the number of fruits\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char fruits[1025];
        scanf("%s", fruits);
        if (fruits[0] == 'l')
            T += 100;
        else if (fruits[0] == 'p')
            T += 75;
        else if (fruits[0] == 'z')
            T += 25;
    }
    printf("%d beli\n", T);
    return 0;
}
