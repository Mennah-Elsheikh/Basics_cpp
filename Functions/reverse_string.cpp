#include <iostream>
#include <string>
using namespace std;

string reverse_str(const string &str)
{
    string str2;
    for (int i = str.size() - 1; i >= 0; i--)
    {
        str2 += str[i];
    }
    return str2;
}

int main()
{
    cout << reverse_str("Hello") << endl;
    return 0;
}
