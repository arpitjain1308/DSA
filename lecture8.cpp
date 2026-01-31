#include <iostream>
#include <vector>
using namespace std;
void linearsearch(int arr[], int n) {
    for(int i=0; i<n; ++i) {
        arr[i]=arr[i]*2;
    }
}

void rev(vector<int> &arr) {
    int s=0;
    int e=arr.size()-1;
    while(s<e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
int main() {
    vector<int> arr = {10,20,30,40,50,60};
    rev(arr);
    for(int i=0; i<arr.size(); ++i) {
        cout<<arr[i]<<" ";
    }
    return 0;
}