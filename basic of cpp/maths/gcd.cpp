#include <iostream> 
using namespace std;

int findGcd(int x, int y)
{
   while(x>0 && y>0){
       if(x>y){
           x = x%y;
       }
       else{
           y = y%x;
       }
   }
   if(x == 0){
       return y;
   } else {
       return x;
   }
}

int main() {
    int x, y;
    // Input values for a and b here
    cout << "Enter two numbers: ";
    cin >> x>> y;
    int gcd = findGcd(x, y);
    cout << "GCD of " << x << " and " << y << " is " << gcd << endl;
    return 0;
}