/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newtestclass6.cpp
 * Author: wa_he
 *
 * Created on Nov 27, 2016, 3:27:54 PM
 */

#include "newtestclass6.h"
#include "TankBuilder.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass6);

newtestclass6::newtestclass6() {
}

newtestclass6::~newtestclass6() {
}

void newtestclass6::setUp() {
}

void newtestclass6::tearDown() {
}

void newtestclass6::testCreateAttributes() {
    TankBuilder tankBuilder;
    tankBuilder.createAttributes();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

