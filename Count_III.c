#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    int count[26] = {0};

    scanf("%s", s);

    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        int index = s[i] - 'a';
        count[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", 'a' + i, count[i]);
    }

    return 0;
}