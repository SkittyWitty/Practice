#include "array_problems.h"
#include <iostream>

using namespace std;

void printArray(float arr [], int length){
    cout << endl;
    cout << "Length: " << length << endl;
    for(int i = 0; i < length; i++){
        cout << arr[i] << " " << endl;
    }
    cout << endl;
}

void remove(float arr [], int &length, int idx){
    printArray(arr, length);
    for(; idx < length-1; idx++){
        //move items down an index
        arr[idx] = arr[idx+1];
    }
    length = length - 1;
    printArray(arr, length);
}


void problem_6_12(){
    cout << "Problem 6-12" << endl;
    float arr [] = {10,20,30};
    int length = 3;
    int& n = length;
    cout << "Before: " << length << endl;
    remove(arr, n, 0);
    cout << "After: " << length<< endl;
}

void removeFirst(float arr[], int& length, float x){
    //find if the item exists and save it to the index
    int idx = -1;
    for(int i = 0; i < length; i++){
        if(arr[i] == x){
            idx = i;
            break;
        }
    }

    if(idx != -1){
        remove(arr, length, idx);
    }
}

void problem_6_13(){
    float arr[] = {50,66,60,70};
    int length = 4;
    removeFirst(arr, length, 66);
}

void removeAll(float arr[], int& length, float x){
    for(int i = 0; i < length; i++){
        if(arr[i] == x){
            remove(arr, length, i);
        }
    }
}

void problem_6_14(){
    int length = 6;
    float arr [] = {66, 66, 22, 45, 66, 8};
    removeAll(arr, length, 66);
}


void passingRefArray(int testArr []){
    testArr[0] = 10;
    testArr[19] = 20;
}

void bonus(){
    const int IMAGE_SIZE = 20;
    cout << "Bonus" << endl;
    int testArr [IMAGE_SIZE];
    //cout << "Before: Test Array [0] = " << testArr[0] << endl;
    passingRefArray(testArr);
    cout << "After: Test Array [0] = " << testArr[0] << endl;
    cout << "After: Test Array [19] = " << testArr[19] << endl;
}
