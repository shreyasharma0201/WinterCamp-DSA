#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

int main()
{
    int a[] = {7, 9, 8, 2, 3};
    BubbleSort(a, 5);
    
} 