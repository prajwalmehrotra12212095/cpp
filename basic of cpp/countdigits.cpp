#include <iostream>
using namespace std;

int countDigits(int n) {
    int cnt;
    for (cnt = 0; n > 0; cnt++) {
        n = n / 10;
    }
    return cnt;
}


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int digits = countDigits(n);
    cout << "Number of digits: " << digits << endl;
    
    return 0;
}

// int cnt = (int)(log10(n)+1); this the formula to find the
