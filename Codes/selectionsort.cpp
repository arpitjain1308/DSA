#include <iostream>
using namespace std;
void selectionsort(int arr[], int n) { // O(n^2)
    for(int i=0; i<n-1; i++) {
        int smallest = i;
        for(int j=i+1; j<n; ++j) {
            if(arr[j] < arr[smallest]) smallest = j;
        }
        swap(arr[smallest], arr[i]);
    }
}
void printarray(int arr[], int n) {
    for(int i=0; i<n; ++i) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[] = {4, 1, 5, 3, 2};
    int n = 5;
    selectionsort(arr, n);
    printarray(arr, n);

    return 0;
}