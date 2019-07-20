//C++ program to caclulate sum of Natural Numbers
//1+2+3+n

#include<iostream>
using namespace std;
int main(){
    
    int x;
    int naturalNumber = 0;
    
    cout <<"Please enter a natural number"<<endl;
    cin >> x;
    
    for (int i = 0; i <=x; i++){
        naturalNumber += i;
    }
    cout << "The total sum of the natural numbers is " << naturalNumber <<endl;

}
