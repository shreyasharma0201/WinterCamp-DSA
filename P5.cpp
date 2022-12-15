#include <iostream>
using namespace std;

int dsum(int a[3][4])
{
    int sum = 0;
    int i = 0, j = 0;
    while(i < 3){
        while(j < 4){
            sum += *(*(a + i) + j);
        }
    }

    return sum;
}

int main()
{
    int arr[3][4] = {
        {11, 22, 33, 44},
        {55, 66, 77, 88},
        {11, 66, 77, 44}};

    cout << dsum(arr);
}