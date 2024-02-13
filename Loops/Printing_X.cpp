using namespace std;
#include <iostream>

int main()
{
    int N;
    cout << "Enter an odd integer N: ";
    cin >> N;

    if (N % 2 == 0)
    {
        cout << "Please enter an odd integer." << std::endl;
        return 1;
    }

    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= N; ++j)
        {
            if (i == j || i + j == N + 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
