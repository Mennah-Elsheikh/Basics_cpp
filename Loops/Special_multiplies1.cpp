using namespace std;

#include <iostream>

int main()
{ // special multiples 1
    int num;
    cin >> num;
    int x = 0;
    while (x <= num)
    {
        if (x % 8 == 0 || (x % 3 == 0 && x % 4 == 0))
        {
            cout << x << " ";
        }
        x++;
    }
}
