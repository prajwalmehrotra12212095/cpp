#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    
    int start = 0;
    int end = n - 1;

    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    } 

    // reverse(str.begin(),str.end());

    cout << str;
    return 0;
}
