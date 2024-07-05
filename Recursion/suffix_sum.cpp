#include <iostream>
using namespace std;
int sum(int arr[], int len , int n)
{
    if ( n == 0)
        return 0;
    else
        return arr[len - 1] + sum(arr, len - 1 , n - 1);
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << sum(arr, 5 , 3);
}