#include <iostream>

using namespace std;

int main(){
    int number;
    int countFours;
    do{
    cout << "Please write a positive integer " << endl;
    cin >> number;
    }while(number <= 0);

    cout << number << " in binary: ";

    while(number != 0){  //calculates the 0's and 1's for the number
        if((number % 2 )== 0){
            cout << "0";
            number /= 2;
            countFours ++;
        }else{
            cout << "1";
            number /= 2;
            countFours++;
        }
    }
    while((countFours % 4) != 0){
        cout << "0";
        countFours++;
    }
    
    return 0;
}