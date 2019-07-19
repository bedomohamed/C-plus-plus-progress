//Find Largest Number Among Three Numbers

#include<iostream>
using namespace std;
int main(){
    int x, y, z;
    cout<<"Please enter your first number" <<endl;
    cin >> x;
    cout <<"Please enter your second number"<<endl;
    cin >> y;
    cout <<"Please enter you third number"<<endl;
    cin>>z;
    
    if ( x > y && x > z){
        cout << x <<" is the largest number" <<endl;
    }else if (y > x && y >z){
        cout << y << " is the largest number" <<endl;
    }else {
        cout  << z << " is the largest number" <<endl;
    }

}
