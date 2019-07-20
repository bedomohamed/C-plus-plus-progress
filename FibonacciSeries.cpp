//Fibonacci Series up to n number of terms

#include<iostream>
using namespace std;
int main(){
    int x, first=0, second=1, next;
    cout <<"How many fibonacci numbers do you need" <<endl;
    cin >> x;
    for(int i=0; i<x; i++){
        if ( i <=1){
            next = i;
        }
        else {
            next = first +second;
            first = second;
            second =  next;
        }
        cout << next << " ";
    }
    cout << endl;
}
