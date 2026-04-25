#include<iostream>
using namespace std;
void changeA(int* ptr) {
    *ptr = 20;
}
void changeA(int &b) {
    b = 30;
}
int main() {
    int a = 10;
    int* ptr = &a;
    int** ptr2 = &ptr;
    int* nptr = NULL;

    int arr[] = {10, 20, 3, 4, 5};

    // cout<<ptr<<endl;
    // cout<<&a<<endl;
    // cout<<&ptr<<endl;
    // cout<<ptr2<<endl;
    // cout<<*(&a)<<endl;
    // cout<<*ptr<<endl;
    // cout<<**ptr2<<endl;
    // cout<<nptr<<endl;

    // cout<<a<<endl;
    // changeA(&a);
    // cout<<a<<endl;

    // changeA(a);
    // cout<<a<<endl;

    //cout<<*arr<<endl;

    // cout<<ptr<<endl;
    // ptr--;
    // cout<<ptr<<endl;

    // cout<<*(arr+2)<<endl;

    // int* pt1;
    // int* pt2 = pt1+2;
    // cout<<(pt2-pt1)<<endl;

    // int* pt1;
    // int* pt2 = pt1;
    // cout<<(pt1 == pt2)<<endl;

    int *ptrarr = arr;
    cout<<*ptrarr<<endl;
    cout<<*(ptrarr+1)<<endl;
    cout<<*(ptrarr+2)<<endl;
    cout<<*(arr+2)<<endl;
    ptrarr++;
    cout<<*ptrarr<<endl;

    return 0;
}