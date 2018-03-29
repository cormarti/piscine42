int max(int *tab, unsigned int len)
{
    unsigned int  i = 0;
    int           max = 0;

    if (!tab)
    {
        max = tab[0];
        while (i < len)
        {
            if (max > tab[i])
                max = tab[i];
            i++;
        }
        return (max);
    }
    return (0);
}