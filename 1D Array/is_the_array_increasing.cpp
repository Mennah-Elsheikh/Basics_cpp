// using namespace std;
// #include <iostream>
// int main()
// {
//     const int N = 200;
//     int n, arr[N];
//     cin >> n;
//     bool flag = 1;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (arr[i + 1] < arr[i])
//         {
//             flag = 0;
//             break;
//         }
//     }
//     if (flag)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
//     return 0;
// }
// another simple solution
using namespace std;
#include <iostream>
int main()
{
    int n;
    cin >> n;
    int arr[201];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}