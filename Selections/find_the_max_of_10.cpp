using namespace std;
#include <iostream>
int main()
{
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
    cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9 >> num10;
    int res;
    res = num1;
    if (num2 > res)
    {
        res = num2;
    }
    if (num3 > res)
    {
        res = num3;
    }
    if (num4 > res)
    {
        res = num4;
    }
    if (num5 > res)
    {
        res = num5;
    }
    if (num6 > res)
    {
        res = num6;
    }
    if (num7 > res)
    {
        res = num7;
    }
    if (num8 > res)
    {
        res = num8;
    }
    if (num9 > res)
    {
        res = num9;
    }
    if (num10 > res)
    {
        res = num10;
    }
    cout << res;
}