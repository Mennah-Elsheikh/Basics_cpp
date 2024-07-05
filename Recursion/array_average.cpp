#include <iostream>
using namespace std;
double average(int arr[], int len)
{
    if (len == 0)
        return 0;
    else
        return (arr[len - 1] + average(arr, len - 1)) / len;
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << average(arr, 5);
}
