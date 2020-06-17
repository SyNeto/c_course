#include <stdio.h>

void my_func (void);

static int count = 5; // global variable.

int main ()
{
    while(count --)
    {
        my_func();
    }
    return 0;
}

void my_func (void)
{
    static int i = 5; // local static variable.
    i++;
    printf("i is %d and count is %d\n", i, count);
}
