#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int bin = 3;
    int x = 7;
    int ans=1;
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