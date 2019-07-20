#include<iostream>
using namespace std;
int main(){
    int x, i;
    cout << "Please enter a number"<<endl;
    cin >> x;
    
    for (i = 1; i <=10; i++){
        cout << x << " x " << i <<" = " << i * x << endl;
    }
}
