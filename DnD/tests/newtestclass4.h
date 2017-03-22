/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newtestclass4.h
 * Author: wa_he
 *
 * Created on Nov 27, 2016, 3:27:40 PM
 */

#ifndef NEWTESTCLASS4_H
#define NEWTESTCLASS4_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass4 : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass4);

    CPPUNIT_TEST(testSetCharacterBuilder);
    CPPUNIT_TEST(testGetCharacter);
    CPPUNIT_TEST(testCreateCharacter);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass4();
    virtual ~newtestclass4();
    void setUp();
    void tearDown();

private:
    void testSetCharacterBuilder();
    void testGetCharacter();
    void testCreateCharacter();

};

#endif /* NEWTESTCLASS4_H */

