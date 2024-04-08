using namespace std;
#include <iostream>
#include <vector> 
int main()
{
    int n;
    cin >> n;
   vector <int> arr (n);
    int freq[770 + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        num += 500;
        freq[num]++;
    }
    int maxpos = 0;
    for (int i = 0; i < 771; i++)
    {
        if (freq[i] > freq[maxpos])
        {
            maxpos = i;
        }
    }
    cout << maxpos - 500 << "\n";
    return 0;
}