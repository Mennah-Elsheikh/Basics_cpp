#include <iostream>
using namespace std;
void array_increment(int arr[], int len)
{
    if (len == 0)
        return;
    else
    {
        arr[len - 1] += len - 1;
        array_increment(arr, len - 1);
    }
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    array_increment(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}