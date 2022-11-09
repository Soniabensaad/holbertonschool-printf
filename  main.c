#include <limits.h>
#include <stdio.h>
#include "main.h"
int main(void)
{
    int x;

    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    x = _printf("dgsjdks %s\n", "qhkjd");
    printf("the number is %d\n", x);
    return (0);
}
