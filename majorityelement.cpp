#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec = {1,2,2,1,1,2,2};
    int freq=0, ans;
    for(int i : vec) {
        if(freq==0) {
            ans=i;
        }
        if(i==ans) {
            freq++;
        }
        else {
            freq--;
        }
    }
    cout<<ans;
    return 0;
}