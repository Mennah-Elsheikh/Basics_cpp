using namespace std;
#include <iostream>
int main()
{
    int ctn = 0;
    for (int a = 1; a <= 200; a++)
    {
        for (int b = 1; b <= 200; b++)
        {
            for (int c = 1; c <= 200; c++)
            {
                int d = a + b - c;

                if (1 <= d && d <= 200)
                    ctn++;
            }
        }
    }
    cout << ctn << endl;
}