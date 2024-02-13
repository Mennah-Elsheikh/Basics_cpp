using namespace std;
#include <iostream>
int main()
{
    int n;
    cin >> n;
    bool first = 1;
    if (n <= 1)
        cout << "there is no prime";
    for (int i = 2; i <= n; i++)
    {
        bool flag = 1;
        for (int j = 2; j < i; j++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag)
        {
            if (!first)
                cout << ",";

            cout << i;

            first = false;
        }
    }
}