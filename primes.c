#include <stdio.h>
#include <stdlib.h>

int main()
{
    scanf("%d", &n);
    cp = 2;
    while (n > 0)
    {
        found = 0;
        cf1 = 2;
        cf1s = cf1 * cf1;
        while (cf1s <= cp)
        {
            cf2 = 2;
            pr = cf1 * cf2;
            while (pr <= cp)
            {
                if (pr = cp)
                {
                    found = 1;
                }
                cf2 = cf2 + 1;
                pr = cf1 * cf2;
            }
            cf1 = cf1 + 1;
            cf1s = cf1 * cf1;
        }
        if (found = 0)
        {
            printf("%d", cp);
            n = n - 1;
        }
        cp = cp + 1;
    }
}