using namespace std;
#include <iostream>
int main()
{
    int num;
    cin >> num;
    int digit1 = num % 10;
    int digit2 = (num / 10) % 10;
    int digit3 = num / 100;
    ///////////////////

    // int last1 = num % 10;
    // num /= 10;

    // int last2 = num % 10;
    // num /= 10;

    // int last3 = num % 10;
    // num /= 10;

    cout << digit1 + digit2 + digit3 << endl;
}