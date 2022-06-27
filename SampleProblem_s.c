#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int x = get_int("case:\n");
    int candy[x];
    int kids[x];

    for(int i = 0; i < x; i++)
    {
        candy[i] = get_int("bags:\n");
        kids[i] = get_int("kids:\n");
    }

    int a_c;
    int y;
    int k;
    int rest;
    int p;
    for(int o = 0; o < x; o++)
    {
        a_c = 0;

        for(int i = 0; i < candy[o]; i++)
        {
            a_c = a_c + candy[o] - i;
        }
        k = kids[o];
        y = a_c/k;

        rest = a_c - k * y;
        p = o + 1;
        printf("Case #%i: %i\n", p, rest);
    }
}
