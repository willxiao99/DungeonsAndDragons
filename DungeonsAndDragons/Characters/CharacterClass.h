/*
 * CharacterClass.h
 *
 *  Created on: Jan 18, 2015
 *      Author: HSIAOFamily
 */

#ifndef CHARACTERCLASS_H_
#define CHARACTERCLASS_H_

#include <iostream>
using namespace std;

class CharacterClass {

protected:
    //variables
    string character_class, role, role_description, power_source, power_source_description, implement;
    int will_class_bonus, health, daily_surge_count;
    
    //functions

    int TranslateClass();
    
public:
	CharacterClass();
	CharacterClass(string character_class);
    ~CharacterClass();
};

#endif /* CHARACTERCLASS_H_ */