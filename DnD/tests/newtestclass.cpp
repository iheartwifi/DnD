/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newtestclass.cpp
 * Author: wa_he
 *
 * Created on Nov 27, 2016, 3:26:54 PM
 */

#include "newtestclass.h"
#include "BullyBuilder.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
}

newtestclass::~newtestclass() {
}

void newtestclass::setUp() {
}

void newtestclass::tearDown() {
}

void newtestclass::testCreateAttributes() {
    BullyBuilder bullyBuilder;
    bullyBuilder.createAttributes();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

