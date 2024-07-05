#include <iostream>
using namespace std;
bool is_prefix(string main, string prefix, int start_pos = 0)
{

    if (start_pos == prefix.size())
        return true; // the base case => i will stop here :)
    else if (main[start_pos] != prefix[start_pos])
    {
        return false;
    }
    else
    {
        return is_prefix(main, prefix, start_pos + 1);
    }
}
int main()
{
    string s, p;
    cin >> s >> p;
    if (is_prefix(s, p))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    cout << endl;
    return 0;
}