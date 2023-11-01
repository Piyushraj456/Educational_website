#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> nums = {{7, 2, 1}, {6, 4, 2}, {6, 5, 3}, {3, 2, 1}};
    for (auto &i : nums)
    {
        sort(i.begin(), i.end());
    }
    for (auto i : nums)
    {
        for (int num : i)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
