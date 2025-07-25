// Created by Tahim Bhuiya
// Include necessary libraries for input/output and dynamic arrays
#include <iostream> 
#include <vector>  

using namespace std; // Use the standard namespace to simplify code

// Function to check if an array represents a min heap
bool isMinHeap(const vector<int>& arr) {
    int n = arr.size(); // Getting the size of the array
    for (int i = 0; i <= (n - 2) / 2; i++) { // Loop through each element up to the parent of the last element
        // If left child is smaller, return false
        if (2 * i + 1 < n && arr[i] > arr[2 * i + 1]) // Checking if left child exists and smaller than the parent
            return false;

        // If right child is smaller, return false
        if (2 * i + 2 < n && arr[i] > arr[2 * i + 2]) // Checking if right child exists and smaller than the parent
            return false;
    }
    return true; // If all conditions pass, return true indicating a min heap
}

// Function to check if an array represents a max heap
bool isMaxHeap(const vector<int>& arr) {
    int n = arr.size(); // Getting the size of the array
    for (int i = 0; i <= (n - 2) / 2; i++) { // Loop through each element up to the parent of the last element
        // If left child is greater, return false
        if (2 * i + 1 < n && arr[i] < arr[2 * i + 1]) // Checking if left child exists and greater than the parent
            return false;

        // If right child is greater, return false
        if (2 * i + 2 < n && arr[i] < arr[2 * i + 2]) // Checking if right child exists and greater than the parent
            return false;
    }
    return true; // If all conditions pass, return true indicating a max heap
}

int main() {
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Initializing array A
    vector<int> B = {11, 9, 7, 5, 3, 1, -1, -3, -5, -7}; // Initializing array B
    vector<int> C = {6, 7, 8, 9, 10, 1, 2, 3, 4, 5}; // Initializing array C

    if (isMinHeap(A)) // Checking if array A is a min heap
        cout << "Array A is a min heap." << endl;
    else if (isMaxHeap(A)) // Checking if array A is a max heap
        cout << "Array A is a max heap." << endl;
    else
        cout << "Array A is neither a max heap nor a min heap." << endl;// Checking if array A is neither

    if (isMinHeap(B)) // Checking if array B is a min heap
        cout << "Array B is a min heap." << endl;
    else if (isMaxHeap(B)) // Checking if array B is a max heap
        cout << "Array B is a max heap." << endl;
    else
        cout << "Array B is neither a max heap nor a min heap." << endl;// Checking if array B is neither

    if (isMinHeap(C)) // Checking if array C is a min heap
        cout << "Array C is a min heap." << endl;
    else if (isMaxHeap(C)) // Checking if array C is a max heap
        cout << "Array C is a max heap." << endl;
    else
        cout << "Array C is neither a max heap nor a min heap." << endl;// Checking if array C is neither

    return 0; // Exiting the program
}

