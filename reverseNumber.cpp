// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n=12345;
    int rev=0;
    while(n>0)
    {
       int  lastDigit=n%10;
       rev=(rev*10)+lastDigit ;
        n=n/10;
    }
    cout<<rev;
    
    return 0;
}