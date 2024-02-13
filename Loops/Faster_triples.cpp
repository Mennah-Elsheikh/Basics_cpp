using namespace std;
#include <iostream>
int main()
{
    int n, m, w;
    cin >> n >> m >> w;
    int ctn = 0;
    for (int a = 1; a <= n; a++)
    {
        for (int b = a; b <= m; b++)
        {
            int c = a + b;
            if (c >= 1 && c <= w)
            {
                ctn += w - c + 1;
                // because that a + b <= c
            }
        }
    }
    cout << ctn;

    return 0;
}