#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int bin = 10;
    int ans=1;
    int x=2;
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