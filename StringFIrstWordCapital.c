#include <stdio.h>
void upr_to_lwr(char *str)
{
    int i;

    for (i = 0; str[i]; i++)
    {

        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        if (i == 0)
        {
            str[0] = str[i] - 32;
        }
    }
}
int main()
{
    char name[100];
    printf("Input your name: \n");
    fgets(name, 100, stdin);
    upr_to_lwr(name);
    printf("Your name is %s \n", name);
    return 0;
}