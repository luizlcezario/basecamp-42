#include <unistd.h>

void loop(int n1, int n2)
{
    char d1;
    char d2;
    d2 = n2 + 1;
    d1 = n1;

    while(d1 <= '9')
    {
        if(d2 <= '9')
        {
            write(1, &n1, 1);
            write(1, &n2, 1);
            write(1, " ", 1);
            write(1, &d1, 1);
            write(1, &d2, 1);
            if(n1 == '9' && n2 == '8' && d1 == '9' && d2 == '9')
            {
            }
            else
            {
                write(1, ",  ", 2);
            }
            d2++;
        }
        else
        {
            d1++;
            d2 = '0';
        }
    }
}


void    ft_print_comb2(void)
{
    char n1;
    char n2;
    n1 = '0';
    n2 = '0';

    while(n1 <= '9')
    {
        loop(n1,n2);
        n2++;

        if(n2 > '9')
        {
            n1++;
            n2 = '0';
        }
    }
}


int    main(void)
{
    ft_print_comb2();
    return (0);
}