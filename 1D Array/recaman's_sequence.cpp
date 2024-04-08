#include <iostream>
using namespace std;
int main()
{
    int arr[201];
    int freq[100000] = {0};
    // cout << arr[0] << " ";
    int index;
    cin >> index;
    freq[0] = 1;
    arr[0] = 0;
    for (int i = 1; i <= index; i++)
    {
        int fun1 = arr[i - 1] - (i - 1) - 1;
        int fun2 = arr[i - 1] + (i - 1) + 1;
        if (fun1 < 0 || freq[fun1])
        {
            arr[i] = fun2;
            freq[fun2] = 1;
        }
        else
        {
            arr[i] = fun1;
            freq[fun1] = 1;
        }
    }
    cout << arr[index];
    return 0;
}