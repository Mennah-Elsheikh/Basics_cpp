using namespace std;
#include <iostream>
int main()
{
    double num1, num2, num3, num4, num5;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    cout << (num1 + num2 + num3 + num4 + num5) / 5.0 << endl;
    cout << (num1 + num2 + num3) / (num4 + num5) << endl;
    cout << ((num1 + num2 + num3) / 3.0) / ((num4 + num5) / 2.0) << endl;
}