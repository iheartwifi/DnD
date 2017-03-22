/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newtestclass2.cpp
 * Author: wa_he
 *
 * Created on Nov 27, 2016, 3:27:12 PM
 */

#include "newtestclass2.h"
#include "CharacterBuilder.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass2);

newtestclass2::newtestclass2() {
}

newtestclass2::~newtestclass2() {
}

void newtestclass2::setUp() {
}

void newtestclass2::tearDown() {
}

void newtestclass2::testGetCharacter() {
    CharacterBuilder characterBuilder;
    Character* result = characterBuilder.getCharacter();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass2::testCreateNewCharacter() {
    string charType;
    int level;
    CharacterBuilder characterBuilder;
    characterBuilder.createNewCharacter(charType, level);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

