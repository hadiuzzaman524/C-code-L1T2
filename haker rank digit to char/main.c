#include <stdio.h>

int main()
{
    static const char word[9][9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a, b;

    scanf("%d %d", &a, &b);

    for ( ; a >= 1 && a <= b; a++)
    {
        if (a <= 9)
            printf("%s\n", word[a - 1]);
        else if (a % 2)
            printf("odd\n");
        else
            printf("even\n");
    }

    return 0;
}
