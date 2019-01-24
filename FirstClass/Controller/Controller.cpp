//
//  Controller.cpp
//  FirstClass
//
//  Created by Bonilla, Sean on 1/24/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"
//Class name, scope resolution, method name
Controller :: Controller(){
    
    this -> specialNumber = 4;
    
}

void Controller :: start(){
    
    cout << "Did you Know..." << endl;
    cout << "Iron Mans Suits are a gold titanium alloy " << specialNumber << " times as strong as titanium" << endl;
    
    
    string input;
    cout << "What is your favorite Marvel Super Hero" << endl;
    cin >> input;
    cout << input << endl;
    
       
    string reason;
    cout << "why?" << endl;
    getline(cin, reason);
    //cin >> reason;
    cout << reason << endl;
    
}
