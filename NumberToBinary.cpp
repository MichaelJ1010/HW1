#include <iostream>

using namespace std;

int main(){
    int number;
    cout << "Please write a positive integer " << endl;
    cin >> number;

    while(number != 0){
        if((number % 2 )== 0){
            cout << "0";
            number /= 2;
        }else{
            cout << "1";
            number /= 2;
        }
    }
    
    return 0;
}