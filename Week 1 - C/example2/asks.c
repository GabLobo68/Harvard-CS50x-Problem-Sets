#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string ask1 = get_string("What is your name?\n");
        printf("Hello, %s\n", ask1);
    string ask2 = get_string("how old are you?\n");
        printf("Wow, %s is a cool age.\n", ask2);
}
