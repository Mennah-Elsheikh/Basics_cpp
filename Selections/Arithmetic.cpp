using namespace std;
#include <iostream>
int main()
{
    int a, b;
    cin >> a >> b;
    if (a % 2 != 0 && b % 2 != 0)
    {
        cout << a * b << endl;
    }
    else if (a % 2 == 0 && b % 2 == 0)
    {
        cout << a / b << endl;
    }
    else if (a % 2 != 0 && b % 2 == 0)
    {
        cout << a + b << endl;
    }
    else
    {
        cout << a - b << endl;
    }
}