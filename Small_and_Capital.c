#include <stdio.h>

int main()
{
    char s[1001];
    scanf("%s", s);
    int capital = 0, small = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            small++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            capital++;
        }
    }
    printf("%d %d", capital, small);
    return 0;
}