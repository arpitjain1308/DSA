#include <iostream>
using namespace std;
//Number Pattern
// int main() {
//     int n;
//     cin>>n;
//     for(int i=0; i<n; ++i) {
//         for(int j=1; j<=n; ++j) {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

//Alphabet Pattern
// int main() {
//     int n;
//     cin>>n;
//     for(int i=0; i<n; ++i) {
//         for(int j=65; j<65+n; ++j) {
//             char ch= char(j);
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
// }

//Continue Numbers Pattern
// int main() {
//     int n;
//     cin>>n;
//     int a=1;
//     for(int i=0; i<n; ++i) {
//         for(int j=1; j<=n; ++j) {
//             cout<<a<<" ";
//             a++;
//         }
//         cout<<endl;
//     }
// }

//Continue Alphabet Pattern
// int main() {
//     int n;
//     cin>>n;
//     char ch='A';
//     for(int i=0; i<n; ++i) {
//         for(int j=1; j<=n; ++j) {
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
// }

//Triangle Pattern
// int main() {
//     int n;
//     cin>>n;
//     for(int i=0; i<n; ++i) {
//         for(int j=0; j<=i; ++j) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//Reverse Number Pattern
// int main() {
//     int n;
//     cin>>n;
//     for(int i=0; i<n; ++i) {
//         for(int j=i+1; j>=1; j--) {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

//More Patterns
// int main() {
//     int n;
//     cin>>n;
//     for(int i=0; i<n; ++i) {
//         for(int j=1; j<=i+1; ++j) {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main() {
//     int n=4;
//     //char ch='A';
//     int a=1;
//     for(int i=1; i<=n; i++) {
//         for(int k=1; k<=n-i; k++) {
//             cout<<" ";
//         }
//         cout<<"*";

//         if(i>1) {
//             for(int k=1; k<=a; k++) {
//                 cout<<" ";
//             }
//             a+=2;
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     a-=4;
//     for(int i=1; i<n; ++i) {
//         for(int j=1; j<=i; ++j) {
//             cout<<" ";
//         }
//         cout<<"*";
//         for(int j=0; j<a; j++) {
//             cout<<" ";
//         }
//         a-=2;
//         if(i!=n-1) {
//             cout<<"*";
//         }
        
//         cout<<endl;

//     }
// }

// 17 Jan Restart

// int main() {
//     int n=4;
//     for(int i=0; i<n; ++i) {
//         for(int j=0; j<n-i-1; ++j) {
//             cout<<" ";
//         }
//         cout<<"*";
//         if(i==0) {
//             cout<<endl;
//             continue;
//         }
//         for(int j=0; j<2*i-1; ++j) {
//             cout<<" ";
//         }
//         cout<<"*";

//         cout<<endl;
//    }

//    for(int i=0; i<n-1; ++i) {
//         for(int j=0; j<i+1; ++j) {
//             cout<<" ";
//         }
//         cout<<"*";
//         if(i==n-2) {
//             break;
//         }
//         for(int j=0; j<2*(n-2-i)-1; ++j) {
//             cout<<" ";
//         }
//         cout<<"*";
//         cout<<endl;

//    }

//     return 0;
// }


//Butterfly Pattern
int main() {
    int n=10;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<i+1; ++j) {
            cout<<"*";
        }
        for(int j=0; j<2*(n-1-i); ++j) {
            cout<<" ";
        }
        for(int j=0; j<i+1; ++j) {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0; i<n; ++i) {
        for(int j=0; j<n-i; ++j) {
            cout<<"*";
        }
        for(int j=0; j<2*i; ++j) {
            cout<<" ";
        }
        for(int j=0; j<n-i; ++j) {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}