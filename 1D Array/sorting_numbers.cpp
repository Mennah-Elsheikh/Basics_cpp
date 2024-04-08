using namespace std;
#include <iostream>
#include <vector>
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int freq[500 + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    for (int i = 1; i < 501; i++)
    {

        while (freq[i]--)
        {
            cout << i << " ";
        }
    }
    return 0;
}