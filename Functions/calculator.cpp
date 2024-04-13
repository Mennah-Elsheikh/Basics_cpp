#include <iostream>
using namespace std;

int operations = 0; // Initialize operations

int menu()
{
    int choice = -1;
    while (choice == -1)
    {
        cout << "\nMenu : \n";
        cout << "1) Add 2 numbers\n";
        cout << "2) Subtract 2 numbers\n";
        cout << "3) Multiply 2 numbers\n";
        cout << "4) Divide 2 numbers \n";
        cout << "5) Exit\n";
        cout << "Enter your menu choice[1 - 5] : ";
        cin >> choice;

        if (!(1 <= choice && choice <= 5))
        {
            cout << "\nInvalid choice.\n";
            choice = -1; // loop keep working
        }
    }
    return choice;
}

void read_2_numbers(double &x, double &y)
{
    cout << "Enter the two numbers : ";
    cin >> x >> y;
}

void add(double x, double y)
{
    cout << "x + y = " << x + y << "\n";
}

void subtract(double x, double y)
{
    cout << "x - y = " << x - y << "\n";
}

void multiply(double x, double y)
{
    cout << "x * y  = " << x * y << "\n";
}

void divide(double x, double y)
{
    if (y != 0)
        cout << "x / y = " << x / y << "\n";
    else
        cout << "can't divide by zero\n";
}

void calculator()
{
    double x, y;
    while (true)
    {
        int choice = menu();
        if (choice == 5)
        {
            break;
        }
        operations++;
        read_2_numbers(x, y);
        if (choice == 1)
            add(x, y);
        else if (choice == 2)
            subtract(x, y);
        else if (choice == 3)
            multiply(x, y);
        else if (choice == 4)
            divide(x, y);
        else
            break;
    }
}

int main()
{
    calculator();
    cout << "total operations : " << operations << endl;
    return 0;
}
