#include <unistd.h> //LIB WRITE
#include <stdio.h> //LIB printf
#include <stdlib.h>//LIB atoi

void math(char const *num)
{
    int x;
    int y;
    int i;

    x = atoi(num);
    i = 1;
    
    while (i <= 10)
    {
        y = x*i;
        
        if (y%2 == 0) 
            printf ("%d X %d = %d Par\n",x,i,y);
        else
            printf ("%d X %d = %d Impar\n",x,i,y);
        i++;
    }
        
}

int main (int argc, char **argv)
{   
    if (argc == 1)
    {
        write (1, &"Error",5);
    }
    else
    {
        math(argv[1]);
    }
    return (0);
}   
