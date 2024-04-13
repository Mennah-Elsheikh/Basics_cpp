#include <iostream>
#include <cmath>
using namespace std;
void set_powers(int arr[], int len = 5, int m = 2)
{
    for (int i = 0; i < len; i++)
    {
        arr[i] = pow(m, i);
    }
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[]{0};
    set_powers(arr, 6, 2);
}