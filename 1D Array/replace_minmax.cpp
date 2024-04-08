using namespace std;
#include <iostream>
int main()
{
    int n;
    cin >> n;
    int arr[205];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mnidx = 0, mxidx = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[mxidx])
        {
            mxidx = i;
        }
        if (arr[i] < arr[mnidx])
        {
            mnidx = i;
        }
    }
    int mn = arr[mnidx], mx = arr[mxidx];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mn)
            arr[i] = mx;
        else if (arr[i] == mx)
            arr[i] = mn;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}