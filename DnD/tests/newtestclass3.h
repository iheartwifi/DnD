/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newtestclass3.h
 * Author: wa_he
 *
 * Created on Nov 27, 2016, 3:27:28 PM
 */

#ifndef NEWTESTCLASS3_H
#define NEWTESTCLASS3_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass3 : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass3);

    CPPUNIT_TEST(testFighter);
    CPPUNIT_TEST(testLevelUp);
    CPPUNIT_TEST(testGetAttackBonus1);
    CPPUNIT_TEST(testGetAttackBonus2);
    CPPUNIT_TEST(testGetAttackBonus3);
    CPPUNIT_TEST(testGetAttackBonus4);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass3();
    virtual ~newtestclass3();
    void setUp();
    void tearDown();

private:
    void testFighter();
    void testLevelUp();
    void testGetAttackBonus1();
    void testGetAttackBonus2();
    void testGetAttackBonus3();
    void testGetAttackBonus4();

};

#endif /* NEWTESTCLASS3_H */

