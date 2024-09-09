#include <iostream>
#include <vector>

using namespace std;

void sort012(vector<int>& arr) {
    int low = 0, mid = 0;
    int high = arr.size() - 1;
    
    // Traverse the array with mid pointer
    while (mid <= high) {
        if (arr[mid] == 0) {
            // Swap arr[low] and arr[mid], increment low and mid
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            // Just increment mid
            mid++;
        }
        else { // arr[mid] == 2
            // Swap arr[high] and arr[mid], decrement high
            swap(arr[high], arr[mid]);
            high--;
        }
    }
}

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    // Test Case 1
    vector<int> arr1 = {0, 1, 2, 1, 0, 2, 1, 0};
    sort012(arr1);
    cout << "Sorted array: ";
    printArray(arr1);

    // Test Case 2
    vector<int> arr2 = {2, 2, 2, 2};
    sort012(arr2);
    cout << "Sorted array: ";
    printArray(arr2);

    // Test Case 3
    vector<int> arr3 = {0, 0, 0, 0};
    sort012(arr3);
    cout << "Sorted array: ";
    printArray(arr3);

    // Test Case 4
    vector<int> arr4 = {1, 1, 1, 1};
    sort012(arr4);
    cout << "Sorted array: ";
    printArray(arr4);

    // Test Case 5
    vector<int> arr5 = {2, 0, 1};
    sort012(arr5);
    cout << "Sorted array: ";
    printArray(arr5);

    // Test Case 6 (Empty array)
    vector<int> arr6 = {};
    sort012(arr6);
    cout << "Sorted array: ";
    printArray(arr6);

    return 0;
}
