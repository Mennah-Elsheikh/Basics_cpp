using namespace std;
#include <iostream>
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (b < a)
    {
        swap(a, b);
    }
    if (c < a)
    {
        swap(c, a);
    }
    if (c < b)
    {
        swap(c, b);
    }
    cout << a << " " << b << " " << c;
}