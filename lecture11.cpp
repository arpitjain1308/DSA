#include <iostream>
#include <vector>
using namespace std;
int main() {
    int nums[3]={3,3,8};
    int n=3;
    int target=6;
    int s=0, e=n-1;
        while(s<e) {
            if((nums[s]+nums[e])<target) {
                s++;
            }
            else if((nums[s]+nums[e])>target) {
                e--;
            }
            else {
                cout<<s<<" "<<e;
                return 0;
            }
        }

    return 0;
}