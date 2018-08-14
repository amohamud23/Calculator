//
//  main.cpp
//  Calculator
//
//  Created by Abdi Mohamud on 8/13/18.
//  Copyright © 2018 Abdi Mohamud. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

void calculator(string str)
{
    int a = 0;
    int total = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(str.at(i) != '+' && str.at(i) != '-')
        {
            a = str.at(i)-48;
            
            total = total + a;
            
        }
        
        if(str.at(i) == '+')
        {
            i++;
            //cout << str.at(i)<< " HERE" << endl;
            a = str.at(i)-48;
            total = total + a;
            
            
        }
        
        if(str.at(i) == '-')
        {
            //cout << str.at(i)<< " HERE" << endl;
            i++;
            a = str.at(i)-48;
            total = total - a;
            
            
        }
        
    }
    
    
    cout << total << endl;
};


int main() {
    string expression = "6+3-1";
    
    calculator(expression);
    
    
    
    return 0;
};
