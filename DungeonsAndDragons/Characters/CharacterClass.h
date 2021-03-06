/*
 * CharacterClass.h
 *
 *  Created on: Jan 18, 2015
 *      Author: WillXiao
 */

#ifndef CHARACTERCLASS_H_
#define CHARACTERCLASS_H_

#include <iostream>
using namespace std;

class CharacterClass {

protected:
    //variables
    string character_class, role, role_description, power_source, power_source_description, implement;
    int fort_class_bonus, ref_class_bonus, will_class_bonus;
    int base_health, hp_level_growth, base_surge_count;
    
    //functions

    int translateClass();
    
public:
	CharacterClass();
    ~CharacterClass();
};

#endif /* CHARACTERCLASS_H_ */
