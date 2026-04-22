// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n=121;
    int rev=0;
    int dup=n;
    while(n>0)
    {
       int  lastDigit=n%10;
       rev=(rev*10)+lastDigit ;
        n=n/10;
    }
   
     if(dup == rev)
    {
        cout << "Palindrome Number"<<endl;
        cout<<rev;
    }
    else
    {
        cout << "Not a Palindrome Number";
    }

    return 0;
}