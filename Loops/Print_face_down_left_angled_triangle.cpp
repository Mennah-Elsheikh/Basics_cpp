using namespace std;

#include <iostream>

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int r = 1;
        while (r <= n)
        {
            cout << '*';
            r++;
        }
        cout << endl;
    }
}