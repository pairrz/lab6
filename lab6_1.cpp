#include<iostream>
using namespace std;

int main(){
    int x;
    int e = 0 , o = 0;
    while (x != 0)
    {
        cout << "Enter an integer: ";
        cin >> x;
        if(x == 0) break;
        if(x % 2 == 0)e++;
        else o++;
    }
    
    cout << "#Even numbers = " << e <<endl;;
    cout << "#Odd numbers = "<< o;
    return 0;
}
