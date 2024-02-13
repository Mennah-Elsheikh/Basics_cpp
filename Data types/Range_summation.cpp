using namespace std;
#include <iostream>

int main()
{
    int start, end;
    cout << "Enter 2 numbers : start and end : ";
    cin >> start >> end;
    int sumtoend = (end * (end + 1)) / 2;
    int sumtostart = (start * (start - 1)) / 2;
    int sumInterval = sumtoend - sumtostart;
    cout << "Sum of numers from 1 to " << end << " = " << sumtoend << endl;
    cout << "Sum of numbers from " << start << " to " << end << " = " << sumInterval;
}