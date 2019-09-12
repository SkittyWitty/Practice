#include <iostream>
#include "function_practice.h"

using namespace std;

// Replaces function call with actual source code
void inline inlineFunction(){
    cout << "I love fish" << endl;
}


void refPassDriver(){
    int a = 0;
    int& b = a;

    cout << "---Before---" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    refPass(a, b);
    inlineFunction();

    cout << "---After---" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}

void refPass(int a, int& b){
    a = 120;
    b = 120;
}


