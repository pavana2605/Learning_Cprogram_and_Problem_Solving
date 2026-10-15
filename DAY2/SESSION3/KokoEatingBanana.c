#include <stdio.h>
int eatingSpeed(int bunch, int size, int h)
{
    int left = 1;
    int right = 0;

    for (int i = 0; i < size; i++)
    {
        if (bunch[i] > right)
        {
            right = bunch[i];
        }
    }
    return right;
}
int main()
{
    int n = 4, h = 8;
    int bunch[] = {3, 6, 7, 11};
    int max = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &bunch[i]);

        if (bunch[i] > max)
        {
            max = bunch[i];
        }
    }

    scanf("%d", &h);

    int low = 1, high = max;
    int answer = max;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        long long hours = 0;

        for (int i = 0; i < n; i++)
        {
            hours += (bunch[i] + (long long)mid - 1) / mid;
        }

        if (hours <= h)
        {
            answer = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("%d\n", answer);

    return 0;
}

// seal division a/b=a+b-1/b
// so for example totalHours=ceil(bunch[i]/mid) can be calculated as (bunch[i]+mid-1)/mid
