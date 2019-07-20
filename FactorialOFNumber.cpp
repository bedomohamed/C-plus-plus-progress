//C++ program to find factorial of a number

#include<iostream>
using namespace std;
int main(){
    
    int x;
    int factorial = 1;
    cout << "Please enter a number"<<endl;
    cin >> x;
    for(int i = 1; i <= x; i++){
        factorial *= i;
    }
    cout << "The factorial is " << factorial <<endl;
}
