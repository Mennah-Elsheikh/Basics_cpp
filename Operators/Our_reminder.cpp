using namespace std;
#include <iostream>
int main()
{
    int n, m;
    cin >> n >> m;
    int mod = n - (n / m) * m;
    cout << mod << endl;
    return 0;
}