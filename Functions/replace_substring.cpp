#include <iostream>
using namespace std;

bool starts_with(string input, string pattern, int pos)
{
    if (pos + pattern.size() > input.size())
    {
        return false;
    }
    for (int i = 0; i < pattern.size(); ++i)
    {
        if (input[pos + i] != pattern[i])
        {
            return false;
        }
    }
    return true;
}

string replace_str(string input, string pattern, string to)
{
    string result = "";
    int pos = 0;
    while (pos < input.size())
    {
        if (starts_with(input, pattern, pos))
        {
            result += to;
            pos += pattern.size();
        }
        else
        {
            result += input[pos];
            ++pos;
        }
    }
    return result;
}

int main()
{
    cout << replace_str("aabcabaaad", "aa", "x") << endl;    // Output: xbcabxad
    cout << replace_str("aabcabaaad", "aa", "aaaa") << endl; // Output: aaaabcabaaaaad
    cout << replace_str("aabcabaaad", "aa", "") << endl;     // Output: bcabad
    return 0;
}
