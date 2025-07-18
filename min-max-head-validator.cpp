//Created by Tahim Bhuiya
#include <iostream> 
#include <vector>  

using namespace std;

bool isMinHeap(const vector<int>& arr) {
    int n = arr.size(); 
    for (int i = 0; i <= (n - 2) / 2; i++) { 
        if (2 * i + 1 < n && arr[i] > arr[2 * i + 1]) 
            return false;