#include<iostream>
using namespace std;

int main()
 {
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[size];

    for(int i=0; i<size; i++)
    {
        cout<<"enter the values in array: ";
        cin>>arr[i];

        for(int j=0; j<i; j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<"Already entered"<<endl;
                break;
            }
        }
    }
    return 0;
}


// #include<iostream>
// using namespace std;

// // Function to check if a number already exists in the array
// bool isDuplicate(int arr[], int currentSize, int num) {
//     for (int i = 0; i < currentSize; i++) {
//         if (arr[i] == num) {
//             return true; // Found a match!
//         }
//     }
//     return false; // No match found
// }

//another method
// int main() {
//     int size;
//     cout << "Enter the size of array: ";
//     cin >> size;

//     int arr[size];

//     for (int i = 0; i < size; i++) {
//         int input;
//         cout << "Enter value " << i + 1 << ": ";
//         cin >> input;

//         // Call the function instead of using a nested loop
//         if (isDuplicate(arr, i, input)) {
//             cout << "Already Entered" << endl;
//         }

//         arr[i] = input; // Store the number in the array
//     }

//     return 0;
// }