#include <iostream>
using namespace std;
bool is_palindrome_array(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {

            return false;
        }
    }
    return true;
}
int main()
{
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (is_palindrome_array(arr, n))
    {
        cout << "It is palidrome " << endl;
    }
    else
    {
        cout << "It is't palidrome " << endl;
    }
    return 0;
}