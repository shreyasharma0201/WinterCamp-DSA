#include <bits/stdc++.h>
using namespace std;

void RightShift(vector<int> &a, int k)
{
    int n = a.size();
    k = k % n;
    reverse(a.begin(), a.end()-k);
    reverse(a.begin()+ n-k, a.end());
    reverse(a.begin(), a.end());
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    RightShift(a, 7);
    for (auto i : a)
    {
        cout << i << " ";
    }
}


