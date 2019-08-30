#include <iostream>
#include "function_problems.h"

using namespace std;

//Problem 5-1
bool isLeapYear(int y){
    return y % 4 == 0 && (y % 400 == 0 || y % 100 != 0);
}

void problem_5_1(){
    int n;

    cout << "Input a year " << endl;
    cin >> n;
    if(isLeapYear(n)){
        cout << n << " is a leap year.\n" << endl;
    }
    else{
        cout << n << " is not a leap year." << endl;
    }
}

//Problem 5-2
void add_by_ref(int& x){
    x + 5;
}

bool add_by_val(int x){
    return x+5;
}

void problem_5_2(){
    int x = 4;
    //cout << "By reference: " << add_by_ref(x) << endl;
    cout << "By value: " << add_by_val(x) << endl;
}
