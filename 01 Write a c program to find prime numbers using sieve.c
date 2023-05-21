// Write a program that finds the prime numbers using sieve method
#include <stdio.h>
int prime[1000000]; // all elements are 0 as it is a global array
int main()
{
    // 1 means not prime
    // 0 means prime
    int n;
    scanf("%d", &n);
    prime[0] = 1, prime[1] = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i + i; j <= n; j += i)
            {
                if (j % i == 0)
                    prime[j] = 1;
            }
        }
    }
    int prime_count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (!prime[i])
        {
            printf("%d ", i);
            prime_count++;
        }
    }
    printf("\n1 to %d total prime = %d", n, prime_count);
    return 0;
}
