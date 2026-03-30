#include <iostream>
using namespace std;
int rev(int n) {
    int a=0;
    while(n>0) {
        int d = n%10;
        a=a*10+d;
        n=n/10;
    }
    return a;
}

bool isPowOf2(int n) {
    // if(n<1) {
    //     return false;
    // }
    // while(n>1) {
    //     if(n%2!=0) {
    //         return false;
    //     } 
    //     n=n/2;
    // }
    // return true;

    return n>0 && (n & (n-1))==0;
}
int main() {
    cout<<endl;
    cout<< (10>>2)<<endl;

    int n=64;
    bool a=isPowOf2(n);
    if(a==1) {
        cout<<"Yes, it is power of 2."<<endl;
    }
    else {
        cout<<"No, it is not power of 2."<<endl;
    }
    cout<<rev(4567);

    return 0;
}
