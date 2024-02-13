using namespace std;
#include <iostream>
int main()
{
    int n;
    cin >> n;
    bool flag = 1;
    if (n <= 1)
        cout << "NO";
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}