/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newtestclass5.cpp
 * Author: wa_he
 *
 * Created on Nov 27, 2016, 3:27:48 PM
 */

#include "newtestclass5.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass5);

newtestclass5::newtestclass5() {
}

newtestclass5::~newtestclass5() {
}

void newtestclass5::setUp() {
}

void newtestclass5::tearDown() {
}

void newtestclass5::testMethod() {
    CPPUNIT_ASSERT(true);
}

void newtestclass5::testFailedMethod() {
    CPPUNIT_ASSERT(false);
}

