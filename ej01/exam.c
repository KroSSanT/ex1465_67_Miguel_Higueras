
#include <unistd.h> //LIB WRITE

int main (void)
{
    write (1, &"\n",1);
    write (1, &"exam", 4);

    return (0);
}   