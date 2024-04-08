using namespace std;
#include <iostream>
int main()
{
    int q;
    cin >> q;
    int freq[10] = {0};
    while (q--)
    {
        int n;
        cin >> n;
        while (n)
        {
            int x = n % 10;
            freq[x]++;
            n /= 10;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << i << " " << freq[i] << endl;
    }
    return 0;
}