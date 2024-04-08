using namespace std;
#include <iostream>
#include <cassert>
int main()
{
    // unique numbers of an ordered list
    const int N = 1000;
    int n, arr[N];
    cin >> n;
    int ctn = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // As the list is sorted, it is enough to check if an element as same as the previous or not
    // if equal, then duplicate. If not, then it is the first of its value!
    // Always make use of the given information :)
    for (int i = 0; i < n; i++)
    {
        assert(arr[i + 1] >= arr[i]);//check if sorted 
        if (arr[i] != arr[i + 1])
        {
            cout << arr[i] << " ";
        }
    }
    // oh! this is very simple !
    //  int last_value = -1;
    //  for (int i = 0; i < n; i++) {
    //  	int value;
    //  	cin >> value;

    // 	if (value != last_value)
    // 		cout << value << " ";

    // 	last_value = value;
    // }
    return 0;
}