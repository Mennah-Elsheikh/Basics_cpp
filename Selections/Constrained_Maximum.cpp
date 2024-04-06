#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool any_updates = false;

    // Initialize to the smallest value
    int res = INT_MIN;

    if (a < 100 && a > res)
        res = a, any_updates = 1;

    if (b < 100 && b > res)
        res = b, any_updates = 1;

    if (c < 100 && c > res)
        res = c, any_updates = 1;

    if (any_updates)
        cout << res << "\n";
    else
        cout << -1 << "\n";

    return 0;
}
