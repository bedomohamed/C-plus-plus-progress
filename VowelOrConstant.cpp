//Check Vowel or a constant Manually
#include<iostream>
using namespace std;
int main(){
    char x;
    int isLowerCaseVowal, isUpperCaseVowal;
    cout << "Please enter a character"<<endl;
    cin >> x;
    isLowerCaseVowal = (x == 'a' || x=='e' || x== 'i' || x == 'o' || x == 'u');
    isUpperCaseVowal = (x == 'A' || x=='E' || x== 'I' || x == 'O' || x == 'U');
    if (isUpperCaseVowal || isLowerCaseVowal){
        cout<<"vowels"<<endl;
    }else{
        cout<<"consonants"<<endl;
    }
}
