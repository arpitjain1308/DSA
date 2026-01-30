#include <iostream>
using namespace std;
void linearsearch(int arr[], int n) {
    for(int i=0; i<n; ++i) {
        arr[i]=arr[i]*2;
    }
}
void rev(int arr[], int n) {
    int start=0;
    int end=n-1;
    while(start<end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main() {
    int arr[]= {10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    rev(arr,n);
    for(int i=0; i<n; ++i) {
        cout<<arr[i]<<" ";
    }
    return 0;
}