using namespace std;

#include <iostream>

int main()
{
    int n;
    cin >> n; // Prompts the user to input the number of rows for the pattern

    int m = 1; // Counter for the number of asterisks in each row, initialized to 1

    while (n--) // Outer loop iterates 'n' times, each iteration represents a row
    {
        int r = 1; // Counter for printing asterisks in each row, initialized to 1

        while (r <= m) // Inner loop prints 'm' number of asterisks
        {
            cout << '*'; // Prints an asterisk
            r++;         // Increment the counter for asterisks in the row
        }

        m++;          // Increment 'm' to increase the number of asterisks in the next row
        cout << endl; // Move to the next line after printing all asterisks in the row
    }
}
