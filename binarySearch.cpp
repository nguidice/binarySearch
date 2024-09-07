//Nicholas Guidice
//"Binary Search"

#include <iostream>
#include <vector>
using namespace std;

// Defining Binary Search Function
int binarySearch(const vector<int>& arr, int low, int high, int valFind) {
    while (low <= high) {
        // To Calculate The Middle Value, And Avoid Integer Overflow
        int median = low + (high - low) / 2;

        // If Middle Element Equals Value To Be Found, Return Median
        if (arr[median] == valFind) {
            return median;
        }

        if (arr[median] > valFind) {
            high = median - 1;
        } else {
            low = median + 1;
        }
    }
    // Return -1 If Value Is Not Present In The Array
    return -1;
}

int main(int argc, char* argv[]) {
    int arrNum;
    int searchNum;

    // Define A Value Vector To The Correct Size
    cin >> arrNum;
    vector<int> valArr(arrNum);

    // Read In the Pre-Sorted Values Into The Vector 
    for (int i = 0; i < arrNum; i++) {
        cin >> valArr[i];
    }

    // Define A Search Vector To The Correct Size
    cin >> searchNum;
    vector<int> searchArr(searchNum);

    // Read In the Search Values Into The Vector 
    for (int i = 0; i < searchNum; i++) {
        cin >> searchArr[i];
    }

    // Perform Binary Search For Each Query
    for (int i = 0; i < searchNum; i++) {
        int index = binarySearch(valArr, 0, arrNum - 1, searchArr[i]);
        if (index != -1) {
            cout << index << endl;  // Print the index if found
        } else {
            cout << "Not Found" << endl;  // Print "Not Found" if not found
        }
    }

    // End Main
    return 0;
}


