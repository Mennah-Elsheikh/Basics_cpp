using namespace std;
#include <iostream>
int main()
{
    int num;
    cin >> num;
    bool is_even1 = num % 2 == 0;
    bool is_even2 = num - (num / 2) * 2 == 0;
    bool is_even3 = (double)num / 2.0 - num / 2 == 0;
    int last_digit = num % 10;
    bool is_even4 = last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8;
    cout << is_even1 << endl;
    cout << is_even2 << endl;
    cout << is_even3 << endl;
    cout << is_even4 << endl;
}