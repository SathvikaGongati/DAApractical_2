#include <iostream>
int binarySearch(int array[], int target, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (array[mid] == target)
            return mid;
        
        if (target > array[mid])
            low = mid + 1; 
        else
            high = mid - 1; 
    }
    return -1; 
}
int main() {
    int array[] = {3, 4, 5, 6, 7, 8, 9};
    int target = 4;
    int n = sizeof(array) / sizeof(array[0]);
    int result = binarySearch(array, target, 0, n - 1);
    if (result == -1)
        std::cout << "Element not found" << std::endl;
    else
        std::cout << "Element found at index: " << result << std::endl;   
    return 0;
}
