/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newtestclass4.cpp
 * Author: wa_he
 *
 * Created on Nov 27, 2016, 3:27:40 PM
 */

#include "newtestclass4.h"
#include "Generator.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass4);

newtestclass4::newtestclass4() {
}

newtestclass4::~newtestclass4() {
}

void newtestclass4::setUp() {
}

void newtestclass4::tearDown() {
}

void newtestclass4::testSetCharacterBuilder() {
    CharacterBuilder* characterBuilder;
    Generator generator;
    generator.setCharacterBuilder(characterBuilder);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass4::testGetCharacter() {
    Generator generator;
    Character* result = generator.getCharacter();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass4::testCreateCharacter() {
    string charType;
    int level;
    Generator generator;
    generator.createCharacter(charType, level);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

