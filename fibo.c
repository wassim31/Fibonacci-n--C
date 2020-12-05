#include <stdio.h>
#include <stdlib.h>

int main (int argc , char **argv[])
{
    int n, Un_1 = 0, Un_2 = 1, i; // F0 = 1 / F1 = 1 / 1,1,2,3,5,8,13,21,34,55...
    scanf("%d", &n);
    if(n == 0)
    {
        Un_1 = 0;
        printf("%d\n", Un_1);
    }
    else if(n == 1)
    {
        Un_1 = 1;
        printf("%d", Un_1);

    }
    else
    {
        for(i = 0; i < n ; i++ )
        {
            Un_1 = Un_1 + Un_2;
            Un_2 = Un_1 - Un_2;
        }
        printf("%d", Un_1);
    }
    return 0;
}
