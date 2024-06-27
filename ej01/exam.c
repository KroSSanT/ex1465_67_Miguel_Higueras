
#include <unistd.h> //LIB WRITE


char *exam( char const *arg)
{  
    char *str;
    int i;
    int bol;

    i = 0;
    bol = 0;
    
    while (arg[i] != "\0")
    {
        if (arg[i] >= '0' && arg[i] <= '9')
        {
            bol = 1;
            break;
        }
        i++;
    }

    if bol


    int init;
    int end;
    
    if (!s1 || !set)
    {
        write (1, "NULL\n",4);
    }
    
    init = 0;
    while (s1[init] != '\0')
    {
        j=0;
        while (set[j] != '\0')
        {
            if (s1[init] == set[j])
                break;
            j++;
        }
        if (s1[init] - set[j] != 0)
            break;
        init++;
    }
    
    end = 0;
    while (s1[end] != '\0')
        end++;
                   
    while (end > init) //no es necesario pasarte de la marca inicial
    {
        j=0;
        while (set[j] != '\0')
        {
            if (s1[end] == set[j])
                break;
            j++;
        }
        if (s1[end] - set[j] != 0)
            break;
        end--;
    }
    
    j=0;
    str_new = (char *)malloc(sizeof(char) * ((end - init) + 1)); //el más 1 es por el nulo del final.

    // rellenamos el string:
    while ( init <= end)
    {
        str_new[j] = s1[init];
        j++;
        init++;
    }
    str_new[j]='\0';

    printf ("init = %d\n", init);
    printf ("end = %d\n", end);
    return(str_new);
}
     

int main (int argc, char **argv)
{
    char *str;

    if (argc == 3)
    {
        str = trim_str(argv[1], argv[2]);
        printf("str %s",str);
        free (str); //libero el puntero, es como liberar str_new porque està conectada.

    }
    return (0);
}   