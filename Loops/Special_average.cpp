using namespace std;
#include <iostream>

int main()
{
    int n;
    cin >> n;
    double numeven = 0, numodd = 0;
    int evenctn = 0, oddctn = 0;
    int ctn = 1;
    while (n--)
    {
        int num;
        cin >> num;
        if (ctn % 2 == 0)
        {
            numeven += num;
            ctn++;
            evenctn++;
        }
        else
        {
            numodd += num;
            ctn++;
            oddctn++;
        }
    }
    cout << numodd / oddctn << endl;
    cout << numeven / evenctn << endl;
}
