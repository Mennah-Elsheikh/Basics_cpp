using namespace std;
#include <iostream>

int main()
{
    int n;
    cin >> n; // Number of test cases

    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num; // Number of elements in the sequence

        int result = 0;
        int power = 1;
        for (int j = 0; j < num; ++j)
        {
            int element;
            cin >> element; // Read each element of the sequence

            int term = 1;
            for (int k = 0; k < power; ++k)
            {
                term *= element; // Compute the term
            }
            result += term; // Add the term to the result

            ++power; // Increment the power for the next term
        }

        cout << result << endl; // Output the result for each test case
    }

    return 0;
}
