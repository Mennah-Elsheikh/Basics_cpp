#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, flag = 1;
    cin >> n;
    // int arr[n];
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
// simple ! 
// using namespace std;
// #include <iostream>
// int main()
// {
//     int arr[1005];
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n / 2; i++)
//     {
//         if (arr[i] != arr[n - 1 - i])
//         {
//             cout << "NO";
//             return 0;
//         }
//     }
//     cout << "YES";
//     return 0;
// }