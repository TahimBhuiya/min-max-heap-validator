//Created by Tahim Bhuiya
#include <iostream> 
#include <vector>  

using namespace std;

bool isMinHeap(const vector<int>& arr) {
    int n = arr.size(); 
    for (int i = 0; i <= (n - 2) / 2; i++) { 
        if (2 * i + 1 < n && arr[i] > arr[2 * i + 1]) 
            return false;
        if (2 * i + 2 < n && arr[i] > arr[2 * i + 2]) 
            return false;
    }
    return true; 
}


bool isMaxHeap(const vector<int>& arr) {
    int n = arr.size(); // Getting the size of the array
    for (int i = 0; i <= (n - 2) / 2; i++) { // Loop through each element up to the parent of the last element
        // If left child is greater, return false
        if (2 * i + 1 < n && arr[i] < arr[2 * i + 1]) // Checking if left child exists and greater than the parent
            return false;
        if (2 * i + 2 < n && arr[i] < arr[2 * i + 2]) 
            return false;
    }
    return true; 
}


int main() {
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    vector<int> B = {11, 9, 7, 5, 3, 1, -1, -3, -5, -7}; 
    vector<int> C = {6, 7, 8, 9, 10, 1, 2, 3, 4, 5}; 

    if (isMinHeap(A)) 
        cout << "Array A is a min heap." << endl;
    else if (isMaxHeap(A)) 
        cout << "Array A is a max heap." << endl;
    else
        cout << "Array A is neither a max heap nor a min heap." << endl;

    if (isMinHeap(B)) 
        cout << "Array B is a min heap." << endl;
    else if (isMaxHeap(B)) 
        cout << "Array B is a max heap." << endl;
    else
        cout << "Array B is neither a max heap nor a min heap." << endl;
