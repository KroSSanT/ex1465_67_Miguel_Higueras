#include <unistd.h> //LIB WRITE
#include <stdio.h> //LIB printf
#include <stdlib.h>//LIB atoi

void math(char const *num)
{
    int x;
    int y;
    int i;
    int j;

    int result[10];
    
    x = atoi(num);
    i = 1;
    j = 0;

    while (i <= 10)
    {
        y = x*i;
        
        if (y%2 == 0) 
            printf ("%d x %d = %d <Par>\n",i,x,y);
        else
            printf ("%d x %d = %d <Impar>\n",i,x,y);
        
        result[j] = y;
        j++;
        i++;
    }

    printf("\nArray de resultados:\n");
    j = 0;
    while (j <1)
    {
        printf("%d,",result[j]);
        j++;
    } 
    while ( j <= 8)
    {
        printf(" %d,",result[j]);
        j++;
    }
    while (j <= 9)
    {
        printf(" %d",result[j]);
        j++;
    }
        
}

int main (int argc, char **argv)
{   
    
    if (argc != 2)
    {
        write (1, &"Error",5);
    }
    else
    {
        math(argv[1]);
    }
    return (0);
}   
