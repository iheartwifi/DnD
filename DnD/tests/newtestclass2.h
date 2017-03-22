/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newtestclass2.h
 * Author: wa_he
 *
 * Created on Nov 27, 2016, 3:27:12 PM
 */

#ifndef NEWTESTCLASS2_H
#define NEWTESTCLASS2_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass2 : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass2);

    CPPUNIT_TEST(testGetCharacter);
    CPPUNIT_TEST(testCreateNewCharacter);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass2();
    virtual ~newtestclass2();
    void setUp();
    void tearDown();

private:
    void testGetCharacter();
    void testCreateNewCharacter();

};

#endif /* NEWTESTCLASS2_H */

