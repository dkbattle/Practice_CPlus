/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mac
 *
 * Created on June 14, 2020, 2:08 PM
 */
// Preprocessor directive
#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Declare a variable to store an integer
    int inputNumber;
    
    cout <<"Enter an integer: ";
    
    //Store integer given user input
    cin >> inputNumber;
    
    //The same with text i.e string data
    cout << "Enter your name: ";
    
    string inputName;
    cin >> inputName;
    
    cout << inputName << " entered " << inputNumber << endl;
    
    
    return 0;
}

