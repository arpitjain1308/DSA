#include <iostream>
using namespace std;
class Parent {
    public:
    int a;
    int b;
    Parent(int A, int B) {
        a=A;
        b=B;
    }
    void func() {
        cout<<"I am a Parent"<<endl;
        cout<<a<<endl<<b;
    }
};

class child: Parent {
    public:
    void func() {
        cout<<"I am a Child";
    }
};

int main() {
    Parent obj(10,20);
    obj.func();
    return 0;
}