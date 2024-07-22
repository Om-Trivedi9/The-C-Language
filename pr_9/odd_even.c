#include <stdio.h>

main()
{

    int o = 50;
    FILE *om, *tr7;
    om = fopen("even.tex", "w");
    tr7 = fopen("odd.tex", "w");

    fprintf(om, "even number's :\n");
    fprintf(tr7, "odd number's :\n");

    for (int i = 50; i < 70; i++)
    {
        if (i % 2 == 0)
        {
            fprintf(om, " %d", i);
        }

        else
        {
            fprintf(tr7, " %d", i);
        }
    }
}