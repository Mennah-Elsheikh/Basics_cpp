using namespace std;
#include <iostream>
int main()
{
    int x, num1, num2, num3, num4, num5;
    cin >> x >> num1 >> num2 >> num3 >> num4 >> num5;
    int ctr = 0;
    if (num1 <= x)
    {
        ctr++;
    }
    if (num2 <= x)
    {
        ctr++;
    }
    if (num3 <= x)
    {
        ctr++;
    }
    if (num4 <= x)
    {
        ctr++;
    }
    if (num5 <= x)
    {
        ctr++;
    }
    cout << ctr << " " << 5 - ctr << endl;
}