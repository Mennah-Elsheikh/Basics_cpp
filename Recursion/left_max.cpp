#include <iostream>
using namespace std;
void left_max(int arr[], int len)
{
    if (len <= 1)
        return;
    else
    {

        left_max(arr, len - 1);
        arr[len - 1] = max(arr[len - 1], arr[len - 2]);
    }
}
int main()
{
    int len = 5;
    int arr[5];
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    left_max(arr, len);
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}