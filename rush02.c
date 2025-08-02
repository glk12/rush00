void    ft_putchar(char c);

void    rush(int x, int y)
{
    int countx;
    int county;

    county = 0;
    countx = 0;
    while (countx < x)
    {
        if(countx == 0 || countx == x-1)
            ft_putchar('A');
        else 
            ft_putchar('B'); 
        countx++;  
    }
    ft_putchar('\n');
    countx=0;    
    //Esse while percorre verticalmente
    while (county < y-2)
    {
        countx=0;
        //Esse percorre horizontalmente
        while(countx < x)
        {   
            if (countx==0 || countx==x-1)
                ft_putchar('B');
            else
                ft_putchar(' ');
            countx++;
        }
        ft_putchar('\n');
        county++;
    }
    countx=0;
    if(y>1)
    {
        while(countx < x)
        {
            if (countx < 1 || countx == x-1)
                ft_putchar('C');
            else
                ft_putchar('B');
            countx++;
        }
    }
}

