#include <bits/stdc++.h>
using namespace std;

void shiftByone(vector<int>& a)
{
    int n = a.size();
    reverse(a.begin()+1, a.end());
    reverse(a.begin(), a.end());
   
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    shiftByone(a);
    for(auto i : a){
        cout << i << " ";
    }
}