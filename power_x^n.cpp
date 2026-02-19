#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long bin = 3;
    double x = 7.0;
    if(bin<0) {
        x=1/x;
        bin=-bin;
    }
    double ans=1;
    while(bin>0) {
        if(bin%2==1) {
            ans*=x;
        }
        x*=x;
        bin/=2;
    }
    cout<<ans;

    return 0;
}