#include <iostream>
using namespace std;
void accumulate_arr(int arr[], int len)
{
    if (len == 1)
        return;
    else
    {
        accumulate_arr(arr, len - 1);
        arr[len - 1] += arr[len - 2];
    }
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    accumulate_arr(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}