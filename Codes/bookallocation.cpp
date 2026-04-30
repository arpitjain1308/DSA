#include <iostream>
using namespace std;

bool isValid(int arr[], int n, int m, int maxallowedpages) { // O(n)
    int stu = 1, page = 0;
    for(int i=0; i<n; ++i) {
        if(arr[i] > maxallowedpages) return false;
        if(page + arr[i] <= maxallowedpages) {
            page += arr[i];
        }
        else {
            stu++;
            page = arr[i];
        }
    }

    if(stu<=m) return true;
    return false;
}
int bookallocation(int arr[], int n, int m) { // O(log n)
    if(n<m) return -1;
    int sum = 0;
    for(int i=0; i<n; ++i) sum += arr[i];
    int start = 0;
    int end = sum;
    int ans = -1;
    while(start<=end) {
        int mid = start + (end-start)/2;
        if(isValid(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    return ans;

}
int main() { // O(logsum * n)
    int arr[] = {2, 1, 3, 4};
    int n = sizeof(arr)/sizeof(int);
    int m = 2;
    int ans = bookallocation(arr, n, m);
    cout<<"Minimum of maximum pages allocated to a student: "<<ans<<endl;
    return -1;
}

