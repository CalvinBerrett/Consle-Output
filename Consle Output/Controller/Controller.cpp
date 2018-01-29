//
//  Controller.cpp
//  Consle Output
//
//  Created by Berrett, Calvin on 1/25/18.
//  Copyright © 2018 Berrett, Calvin. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    string name = "Destroyer of Worlds";
    cout << name << endl;
    
    for (int index = 13; index < 32; index ++)
    {
        cout << index << " ";
    }
    cout << endl;
    
    string *address;
    address = &name;
    cout << "This is the address of my name in the code: " << address << endl;
    
    cout << "What's your name? " << endl;
    string input;
    getline(cin, input);
    cout << input << " is a great name, my name's " << name << endl;
    cout << "Goodbye now!" << endl;
    
}

