#include <iostream>
using namespace std;

int recur(int a)
{
    if (a == 0)
        return 0;

    return (a % 10) + recur(a / 10);
}

int main()
{
    int a = 879;
    cout << recur(a);
}