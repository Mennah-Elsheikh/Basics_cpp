using namespace std;

#include <iostream>
// minimum values
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m;
        cin >> m;
        int x = 0, minimum;
        while (x < m)
        {
            int num;
            cin >> num;
            if (x == 0)
            {
                minimum = num;
            }
            else
            {
                if (num < minimum)
                {
                    minimum = num;
                }
            }
            x++;
        }
        cout << minimum << endl;
    }
}
