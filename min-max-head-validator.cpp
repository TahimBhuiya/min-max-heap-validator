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