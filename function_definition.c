#include <stdio.h>

int my_func();

int main()
{
    int i = my_func();
    printf("value of i : %d \n", i);
    return 0;
}

int my_func()
{
    return 1;
}