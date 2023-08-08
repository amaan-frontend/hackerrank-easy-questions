#include <stdio.h>
#include <stdbool.h>

void absolutePermutation(int n, int k)
{
    int permutation[n + 1];
    bool used[n + 1];

    for (int i = 1; i <= n; i++)
    {
        used[i] = false;
    }

    for (int i = 1; i <= n; i++)
    {
        int smaller = i - k;
        int larger = i + k;

        if (smaller >= 1 && !used[smaller])
        {
            permutation[i] = smaller;
            used[smaller] = true;
        }
        else if (larger <= n && !used[larger])
        {
            permutation[i] = larger;
            used[larger] = true;
        }
        else
        {
            printf("-1\n");
            return;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", permutation[i]);
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        absolutePermutation(n, k);
    }

    return 0;
}
