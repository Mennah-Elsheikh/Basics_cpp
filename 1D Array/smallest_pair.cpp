#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
void init()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main()
{
    init();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        int minimum = INT8_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {

                sum = (arr[i] + arr[j]) + (j - i);
                minimum = min(sum, minimum);
            }
        }
        cout << minimum << endl;
    }
    return 0;
}