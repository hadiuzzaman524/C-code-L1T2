
#include <stdio.h>
#include <string.h>
#define BASE 10

int main()
{
    char s[1000];
    int i, lastDigit,num;
    int freq[BASE];
    gets(s);

    for(i=0; i<BASE; i++)
    {
        freq[i] = 0;
    }
    int n=strlen(s);
    while(n != 0)
    {
        lastDigit = n % 10;

        n /= 10;

        freq[lastDigit]++;
    }


    for(i=0; i<BASE; i++)
    {
        printf("%d", freq[i]);
    }

    return 0;
}
