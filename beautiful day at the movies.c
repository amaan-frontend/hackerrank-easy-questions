#include <stdio.h>
#include <stdlib.h>

int reverse(int n)
{
    int reversed = 0;

    while (n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return reversed;
}

int beautifulDays(int i, int j, int k)
{
    int beautifulCount = 0;

    for (int day = i; day <= j; day++)
    {
        int reversedDay = reverse(day);
        int difference = abs(day - reversedDay);

        if (difference % k == 0)
        {
            beautifulCount++;
        }
    }

    return beautifulCount;
}

int main()
{
    int i, j, k;

    // Read input
    scanf("%d %d %d", &i, &j, &k);

    int result = beautifulDays(i, j, k);
    printf("%d\n", result);

    return 0;
}
