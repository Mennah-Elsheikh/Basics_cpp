using namespace std;
#include <iostream>
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int ctn = 0;
    for (int i = 1; i <= n; i++)
    {
        int m = i;
        int x, sum = 0;
        while (m)
        {
            x = m % 10;
            sum += x;
            m /= 10;
        }
        if (sum >= a && sum <= b)
        {
            ctn += i;
        }
    }
    cout << ctn << endl;
    return 0;
}