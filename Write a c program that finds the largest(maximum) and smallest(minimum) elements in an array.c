//  Write a c program that finds the largest(maximum) and smallest(minimum) elements in an array.

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int mn = arr[0], mx = arr[0]; // assumed
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < mn) // smallest(minimum) element comparision
            mn = arr[i];
        if (arr[i] > mx) // largest(maximum) element comparision
            mx = arr[i];
    }
    printf("Minimum element of the array is = %d\n", mn);
    printf("Maximum element of the array is = %d\n", mx);
}
