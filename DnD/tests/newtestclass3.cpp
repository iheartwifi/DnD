/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newtestclass3.cpp
 * Author: wa_he
 *
 * Created on Nov 27, 2016, 3:27:28 PM
 */

#include "newtestclass3.h"
#include "Fighter.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass3);

newtestclass3::newtestclass3() {
}

newtestclass3::~newtestclass3() {
}

void newtestclass3::setUp() {
}

void newtestclass3::tearDown() {
}

void newtestclass3::testFighter() {
    Fighter fighter();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass3::testLevelUp() {
    Fighter fighter;
    fighter.levelUp();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass3::testGetAttackBonus1() {
    Fighter fighter;
    int result = fighter.getAttackBonus1();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass3::testGetAttackBonus2() {
    Fighter fighter;
    int result = fighter.getAttackBonus2();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass3::testGetAttackBonus3() {
    Fighter fighter;
    int result = fighter.getAttackBonus3();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass3::testGetAttackBonus4() {
    Fighter fighter;
    int result = fighter.getAttackBonus4();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

