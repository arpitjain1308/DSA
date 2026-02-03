#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> vec = {3,-4,5,4,-1,7,-8};
    int n=vec.size();
    int maxs=INT8_MIN;
    for(int i=0; i<n; ++i) {
        int curr = 0;
        for(int j=i; j<n; ++j) {
            curr+=vec[j];
            maxs=max(curr, maxs);
            //cout<<curr<<endl;
        }
    }

    cout<<maxs;
    return 0;
}