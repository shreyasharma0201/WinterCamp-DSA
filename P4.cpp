#include <iostream>
using namespace std;

void partition(int a[], int n)
{
    int i = 0, j = 0;

    int e = n-1;

    while(i <= e)
    {
        if(i >= 0){
            swap(a[i++], a[j++]);
        }else{
            i++;
        }
    }
}

int main()
{
    int a[] = {-9, 7, 6, -3, 1};
    
    partition(a, 5);

    for(int i = 0; i < 5; i++)
    {
        cout << a[i] <<" ";
    }
}