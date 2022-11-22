int	    is_power_of_2(unsigned int n)
{
    int nb = 1;

    if(n != 0)
    {
        while(n % 2 == 0)
        {
        n /= 2;
        }
    }
    return((n == 1)? 1: 0);
}
/*
int main(void)
{
    int test = 12;

    return(is_power_of_2(test));
}*/