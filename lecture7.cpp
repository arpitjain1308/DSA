#include <iostream>
using namespace std;
int rev(int n) {
    int res=0;
    while(n>0) {
        int d=n%10;
        n=n/10;
        res=res*10+d;
    }

    return res;
}

bool isPowOf2(int n) {
    if(n<1) {
        return false;
    }
    while(n>1) {
        if(n%2!=0) {
            return false;
        } 
        n=n/2;
    }
    return true;
}
int main() {
    cout<<endl;
    // cout<<(10>>1)<<endl;
    // cout<<(10>>2)<<endl;
    // cout<<(6&2)<<endl;
    // cout<<(6|2)<<endl;
    // cout<<(6^2)<<endl;

    // int n=4567;
    // cout<<rev(n);

    int n=41;
    bool a=isPowOf2(n);
    if(a==1) {
        cout<<"hai, power of 2 desu."<<endl;
    }
    else {
        cout<<"iie. power of 2 janai desu."<<endl;
    }

    return 0;
}
