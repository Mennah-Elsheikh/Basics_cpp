#include <iostream>
using namespace std;

int arr_max(int arr[], int len)
{
    if (len == 1)
        return arr[0];
    else
        return max(arr[len - 1], arr_max(arr, len - 1));
}

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << arr_max(arr, 5);
}
