#include <iostream>
using namespace std;

void count(int arr[], int n)
{
    int ev = 0, o = 0;
    int *s = arr;
    int *e = s + n;

    int count = 0;
    while (s < e)
    {
        if ((*s) % 2 == 0)
        {
            ev++;
        }
        else
        {
            o++;
        }
        s++;
    }

    cout << ev << endl;
    cout << o << endl;
}

int main()
{
    int a[] = {7, 9, 8, 2, 3};
    count(a, 5);
}