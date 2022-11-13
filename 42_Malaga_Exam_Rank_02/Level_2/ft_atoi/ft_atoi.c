int	ft_atoi(const char *str)
{
    int sig = 1;
    int nb = 0;

    while(*str >= 8 && *str <= 13)
    str++;
    if(*str == '-')
    sig = -1;
    while(*str)
    {
        if(*str >= 48 && *str <= 57)
        {
            nb = nb * 10 + (*str - 48);
        }
        else
        return(-1);
        str++;
    }
    return(nb * sig);
}