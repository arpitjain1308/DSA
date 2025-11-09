#include <iostream>
using namespace std;
int decToBinary(int n) {
    int ans=0;
    int pow=1;
    while(n>0) {
        int rem=n%2;
        n=n/2;
        ans=ans+rem*pow;
        pow=pow*10;
    }

    return ans;
}
int binaryToDec(int n) {
    int ans=0;
    int pow=1;
    while(n>0) {
        int rem=n%10;
        n=n/10;
        ans=ans+rem*pow;
        pow=pow*2;
    }
    return ans;
}
int main() {
    int n=64;
    cout<<decToBinary(n);
    return 0;
}