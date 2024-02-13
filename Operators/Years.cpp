using namespace std;
#include <iostream>
int main()
{
    int days;
    cin >> days;
    int year = days / 360;
    days %= 360;
    int month = days / 30;
    days %= 30;
    cout << year << " " << month << " " << days << endl;
    return 0;
}