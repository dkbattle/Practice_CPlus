/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mac
 *
 * Created on June 14, 2020, 2:16 PM
 */
//Preprocessor directive
#include <iostream>
#include <cstdlib>

using namespace std;

void output();
/*
 * 
 */

//Start of the program
int main(int argc, char** argv) {

    output();
    
}

void output(){
    int number1;
    int number2;
    int output;
    
    cout << "Enter first integer: ";
    
    cin >> number1;
    
    cout << "Enter second integer: ";
    
    cin >> number2; 
    
    output = number1 - number2;
    
    if(number1 < number2){
        cout << "negative number " << endl;
    }
    else{
        cout << " The number is positive " << endl;
    }
    
    cout <<"The answer is: " << output << endl;
    
    //return 0;
}