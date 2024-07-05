#include <iostream>
using namespace std;

// void right_max(int arr[], int len) {
//     if (len <= 1)
//         return;
//     else {
//         right_max(arr, len - 1);
//         arr[len - 2] = max(arr[len - 1], arr[len - 2]);
//     }
// }
void right_max(int arr[], int len, int pos = 0) {
    if (pos >= len - 1)
        return;
    else {
        right_max(arr, len, pos + 1);
        arr[pos] = max(arr[pos], arr[pos + 1]);
    }
}

int main() {
    int len = 5;
    int arr[5];
    
    // Input the array elements
    cout << "Enter " << len << " elements:" << endl;
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    // Print the original array
    cout << "Original array:" << endl;
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Modify the array using right_max function
    right_max(arr, len);

    // Print the modified array
    cout << "Modified array:" << endl;
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
