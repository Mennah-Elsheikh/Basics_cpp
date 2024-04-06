using namespace std;
#include <iostream>
int main()
{
    int x, s1, e1, s2, e2, s3, e3;
    cin >> x >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;
    int ctr = 0;
    if (x >= s1 && x <= e1)
    {
        ctr++;
    }
    if (x >= s2 && x <= e2)
    {
        ctr++;
    }
    if (x >= s3 && x <= e3)
    {
        ctr++;
    }
    cout << ctr << endl;
}
