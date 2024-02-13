using namespace std;

#include <iostream>

int main()
{
    // Special Multiples 2
    int n;
    cin >> n;
    int ctn = 0;
    int num = 0;
    while (ctn < n)
    {
        if (num % 3 == 0 && num % 4 != 0)
        {
            cout << num << " ";
            ctn++;
        }
        num++;
    }
}
