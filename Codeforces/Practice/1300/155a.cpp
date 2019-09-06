#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, largest = INT_MIN, smallest = INT_MAX, count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (i != 0)
        {
            if (a > largest || a < smallest)
            {
                count++;
            }
        }
        if (a > largest)
        {
            largest = a;
        }
        if (a < smallest)
        {
            smallest = a;
        }
    }
    cout << count;
    return 0;
}