#include <iostream>
using namespace std;
void do_something(int n)
{
    if (n)
    {
        cout << n % 10 << "\n";
        do_something(n / 10);
    }
}
void do_something2(int n)
{
    if (n)
    {
        do_something2(n / 10);
        cout << n % 10 << "\n";
    }
}
int main()
{
    do_something(1234546); // the output => 6 5 4 3 2 1
    cout << "\n=====================\n";
    do_something2(1234546); // the output => 1 2 3 4 5 6
    return 0;
}
