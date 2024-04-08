using namespace std;
#include <iostream>
int main()
{
    int n, numbers[200];

    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> numbers[i];

    int minimum_idx1 = 0;
    for (int i = 1; i < n; ++i)
    {
        if (numbers[minimum_idx1] >= numbers[i])
            minimum_idx1 = i;
    }

    int minimum_idx2 = -1; // same code again
    for (int i = 0; i < n; ++i)
    {
        if (i == minimum_idx1)
            continue;
        if (minimum_idx2 == -1 || numbers[minimum_idx2] >= numbers[i])
            minimum_idx2 = i;
    }

    int minimum_idx3 = -1;
    for (int i = 0; i < n; ++i)
    {
        if (i == minimum_idx1 || i == minimum_idx2)
            continue;
        if (minimum_idx3 == -1 || numbers[minimum_idx3] >= numbers[i])
            minimum_idx3 = i;
    }
    cout << numbers[minimum_idx1] << " " << numbers[minimum_idx2] << " " << numbers[minimum_idx3];
    return 0;
}