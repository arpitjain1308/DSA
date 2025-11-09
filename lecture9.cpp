#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(-20);
    vec.push_back(30);
    vec.push_back(-40);
    vec.push_back(50);
    int max= INT8_MIN;
    for(int i=0; i<vec.size(); ++i) {
        int sum=0;
        for(int j=i; j<vec.size(); ++j) {
            sum+=vec[j];
        }
        if(sum>max) {
            max=sum;
        }
    }
    cout<<max;
}