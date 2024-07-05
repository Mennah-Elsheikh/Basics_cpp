#include <iostream>
using namespace std;

bool is_palindrome(int arr[], int left, int right)
{
    if (left >= right)
    {
        return true; // Base case: All elements have been checked
    }
    if (arr[left] != arr[right])
    {
        return false; // Base case: Elements are not equal
    }
    return is_palindrome(arr, left + 1, right - 1); // Recursive case: Check inner elements
}

bool is_palindrome(int arr[], int len)
{
    return is_palindrome(arr, 0, len - 1); // Initial call with full array
}

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    if (is_palindrome(arr, 5))
    {
        cout << "The array is a palindrome." << endl;
    }
    else
    {
        cout << "The array is not a palindrome." << endl;
    }
    return 0;
}
