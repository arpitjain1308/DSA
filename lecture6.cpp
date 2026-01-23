#include <iostream>
using namespace std;

int decToBinary(int n) {
    int ans=0;
    int pow=1;
    while(n>0) {
        int d = n%2;
        ans = ans+d*pow;
        pow=pow*10;
        n=n/2;
    }
    return ans;
}

int binaryToDec(int n) {
    int ans=0;
    int pow=1;
    while(n>0) {
        int d = n%10;
        n/=10;
        ans+=d*pow;
        pow*=2;
    }
    return ans;
}
int main() {
    int n=1010;
    cout<<binaryToDec(n);
    return 0;
}