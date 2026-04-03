// #include <iostream>
// using namespace std;
// int main() {
//     int arr[7] = {3, -4, 5, 4, -1, 7, -8};
//     int n = sizeof(arr)/sizeof(int);
//     int sum=0;
//     int max=INT_MIN;
//     for(int s=0; s<n; ++s) {
//         sum=0;
//         for(int e=s; e<n; ++e) {
//             sum+=arr[e];
//             if(sum>max) {
//                 max=sum;
//             }
//         }
//     }
//     cout<<max;
// }

//By using Kadane's algorithm, we can find maximum subarray sum in O(n) time only. 
//If we are finding maximum sum then we do not need to add negative integer in the sum 
//because it will eventually reduce sum, so, we will add 0 instead. 
//At any point if our currsum<0 then make it 0. Meanwhile, keep updating maxsum.


#include <iostream>
using namespace std;
int main() {
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int n = sizeof(arr)/sizeof(int);
    int currsum = 0;
    int maxsum = INT_MIN;
    for(int i=0; i<n; ++i) {
        currsum+=arr[i];
        maxsum = max(maxsum, currsum);
        if(currsum<0) currsum=0;
    }
    cout<<maxsum;
}