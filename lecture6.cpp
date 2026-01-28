#include <iostream>
using namespace std;

int decToBinary(int n) {
    int bin=0;
    int power=1;
    while(n>0) {
        int d=n%2;
        n/=2;
        bin=bin + d*power;
        power=power*10;
    }
    return bin;
}

int binaryToDec(int n) {
    int dec=0;
    int power=1;
    while(n>0) {
        int d=n%10;
        n/=10;
        dec=dec+ d*power;
        power=power*2;
    }
    return dec;
}

int main() {
    int n=11001;
    cout<<binaryToDec(n);
    return 0;
}