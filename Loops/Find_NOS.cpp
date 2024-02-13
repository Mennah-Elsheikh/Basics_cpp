using namespace std;

#include <iostream>
// find NOs
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() == 2)
        {
            if (s == "NO" || s == "ON" || s == "no" || s == "on" || s == "No" || s == "oN" || s == "On" || s == "nO")
            {
                cout << s << " ";
            }
        }
    }
}
