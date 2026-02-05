#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string str = "asdfghjkdl";
    int arr[26] = {0};
    for(char c : str) {
        arr[c-'a']++;
    }
    for(int i : str) {
        for(int i=0; i<26; ++i) {
            
        }
    }


    return 0;
}