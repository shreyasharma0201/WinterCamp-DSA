#include <bits/stdc++.h>
using namespace std;

int  findMissing(int arr[], int n)
{
    int Mx = arr[0], Mn = arr[0], sum = arr[0];

    for(int i = 1; i < n; i++)
    {
        Mx = max(Mx, arr[i]);
        Mn = min(Mn, arr[i]);
        sum += arr[i];
    }

    Mn = Mn - 1;
    int total = (Mx * (Mx - 1))/2;
    int small = (Mn * (Mn - 1)) / 2;

    int actual = total- small;

    return actual - sum;
}

int main()
{
    int arr[] = {11, 12, 13, 14, 15, 17};
    int n = sizeof(arr)/ sizeof(arr[0]);

    cout << findMissing(arr, n);
}
