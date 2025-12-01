#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    // Sort in ascending order
    std::sort(arr.begin(), arr.end());
    
    // Print sorted array
    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}