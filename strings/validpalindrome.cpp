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
        // Skip non-alphanumeric characters from the front
        while (start < end && !isalnum(str[start])) start++;

        // Skip non-alphanumeric characters from the end
        while (start < end && !isalnum(str[end])) end--;

        // Compare characters case-insensitively
        if (tolower(str[start]) != tolower(str[end])) {
            cout << "false" << endl;
            return 0;
        }

        start++;
        end--;
    }

    cout << "true" << endl;
    return 0;
}


class Solution {
    public:
    bool isAlphanumeric(char ch){
        if((ch>='0' && ch<='9') || 
        (tolower(ch) >= 'a' && tolower(ch)<='z')){
            return true;
        }
        return false;
    }
        bool isPalindrome(string s) {
            int start = 0;
            int end = s.length()-1;
            while(start<end){
               if(!isAlphanumeric(s[start])) {
                start++; continue;
               }
                 if(!isAlphanumeric(s[end])) {
                end--; continue;
               }
                 if(tolower(s[start]) != tolower(s[end])){
                 return false;
                 }
                 start++;
                 end--;
            }
            return true;
        }
        
    };
