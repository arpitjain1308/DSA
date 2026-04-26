#include<iostream>
using namespace std;
int binarysearch(int arr[], int size, int target) {
    int start = 0;
    int end = size-1;
    while(start<=end) {
        int mid = start + (end - start)/2;
        if(arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] > target) {
            end = mid - 1;
        }
        else if(arr[mid] < target) {
            start = mid + 1;
        }
    }

    return -1;
}

int binaryrecursion(int arr[], int size, int target, int start, int end) {
    if(start<=end) {
        int mid = start + (end-start)/2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] > target) {
            return binaryrecursion(arr, size, target, start, mid-1);
        }
        else if(arr[mid] < target) {
            return binaryrecursion(arr, size, target, mid+1, end);
        }
    }

    return -1;
}
int main() {
    int arr[] = {-1, 0, 3, 4, 5, 9, 12, 15};
    int target =-1;
    int size = sizeof(arr)/sizeof(int);
    int pos = binarysearch(arr, size, target);

    int start = 0;
    int end = size-1;
    int posr = binaryrecursion(arr, size, target, start, end);
    cout<<pos<<endl;
    cout<<posr;
}