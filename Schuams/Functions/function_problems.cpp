#include <iostream>
#include "function_problems.h"
#include <cmath>

using namespace std;

//Problem 5-1
bool isLeapYear(int y){
    return y % 4 == 0 && (y % 400 == 0 || y % 100 != 0);
}

void problem_5_1(){
    cout << "problem_5_1" << endl;
    int n = 2015;
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
    cout << "problem_5_2" << endl;
    int x = 4;
    //cout << "By reference: " << add_by_ref(x) << endl;
    cout << "By value: " << add_by_val(x) << endl;
}


//Problem 5-3
void problem_5_3(){
    cout << "problem_5_3" << endl;
    for(float x = 0; x < 2; x+= 0.2){
        cout << x << "\t\t" << cos(2*x) << "\t" << 2*pow(cos(x),2)-1 << endl;
    }
}

//Problem 5-4
void problem_5_4(){

}

//Problem 5-5
void problem_5_5(){
    cout << "problem_5_5" << endl;

    double b = 2.0;
    for(float x = 0; x < 2; x+= 0.2){
        cout << x << "\t\t" << pow(b, x) << "\t" <<  exp(x*log(b)) << endl;
    }
}
