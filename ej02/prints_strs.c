# include <unistd.h>

void print_strs(int const arg, char const *str)
{
    int i;

    i = 0;
    if (arg%2 == 0)
    {
        while (str[i] != '\0')
        {
            i++;
        }

        while (i >= 0)
        {
            write (1, &str[i], 1);
            i--;
        }
        write (1, &"\n", 1);
    }
    else
    {
        while (str[i] != '\0')
        {
            write (1, &str[i], 1);
            i++;
        }
        write (1, &"\n",1);
    }
}

int main (int argc, char **argv)
{   
    int i;
    
    i=1;
    while (argc != i)
    {
        print_strs(i, argv[i]);
        i++;
    }
    return (0);
}   
