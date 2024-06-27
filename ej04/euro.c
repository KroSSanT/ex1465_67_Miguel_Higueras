#include <unistd.h> //LIB WRITE
#include <stdio.h> //LIB printf

int local(char const *eq1)
{
    char *sp;
    char *al;
    int i;
    int local;
    
    sp = "Spain";       //local 1
    al = "Albania";     //local 4
    i = 0;

    while (eq1[i] != '\0')
    {
        if (eq1[i] == sp[i])
        {
            i++;
            local = 1;
        }
        else
        {
            local = 0;
            break;
        }
    }
    
    i = 0;
    if (local == 0)
    {
        while (eq1[i] != '\0')
        {
            if (eq1[i] == al[i])
            {
                i++;
                local = 4;
            }
            else
            {
                local = 0;
                break;
            }
        }
    }
    return (local);
}

int visitante(char const *eq2)
{
    char *sp;
    char *cr;
    char *it;
    int i;
    int visitante;
    
    sp = "Spain";       // 1
    cr = "Croatia";     // 2
    it = "Italy";       // 3
    i = 0;

    while (eq2[i] != '\0')
    {
        if (eq2[i] == sp[i])
        {
            i++;
            visitante = 1;
        }
        else
        {
            visitante = 0;
            break;
        }
    }
        
    i = 0;
    if (visitante == 0)
    {
        while (eq2[i] != '\0')
        {
            if (eq2[i] == cr[i])
            {
                i++;
                visitante = 2;
            }
            else
            {
                visitante = 0;
                break;
            }
        }
    }
    
    i = 0;
    if (visitante == 0)
    {
        while (eq2[i] != '\0')
        {       
            if (eq2[i] == it[i])
            {
                i++;
                visitante = 3;
            }
            else
            {
                visitante = 0;
                break;
            }
        }
    }
    return(visitante);
}

void euro(char const *eq1, char const *eq2)
{
    int loc;
    int vis;

    loc = local(eq1);
    vis = visitante(eq2);

    if (loc == 1)
    {
        if (vis == 2) printf("1\n");
        else if (vis == 3) printf("1\n");
        else printf("Arguments Error\n");
    }
    else if (loc == 4)
    {
        if (vis == 1) printf("2\n");
        else printf("Arguments Error\n");
    }
    else printf("Arguments Error\n");
        
}

int main (int argc, char **argv)
{   
    if (argc != 3)
    {
        printf("Arguments Error\n");
    }
    else
    {
        euro(argv[1],argv[2]);
    }
    return (0);
}   
