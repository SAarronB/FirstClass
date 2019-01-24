//  Controller.hpp
//  FirstClass
//  Created by Bonilla, Sean on 1/24/19.
//  Copyright © 2019 CTEC. All rights reserved.

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
using namespace std;
//Classes are only in defined in a Header files
//Classes only get prototypes
//Visibility is handled in the Header file
//Variables/Method/Data Members/Templets have to be defined in Header files
class Controller{

//Dont have multiple Private/Public/Protected sections
public:
    int specialNumber;
//private:
    Controller();
    void start();
    
};

#endif /* Controller_hpp */
