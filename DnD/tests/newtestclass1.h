/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newtestclass1.h
 * Author: wa_he
 *
 * Created on Nov 27, 2016, 3:27:04 PM
 */

#ifndef NEWTESTCLASS1_H
#define NEWTESTCLASS1_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass1 : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass1);

    CPPUNIT_TEST(testCharacter);
    CPPUNIT_TEST(testCharacter2);
    CPPUNIT_TEST(testCharacter3);
    CPPUNIT_TEST(testSetName);
    CPPUNIT_TEST(testSetLevel);
    CPPUNIT_TEST(testSetType);
    CPPUNIT_TEST(testAssignScores);
    CPPUNIT_TEST(testRandomAbilityScores);
    CPPUNIT_TEST(testGetHighestAbilityScore);
    CPPUNIT_TEST(testSetStrength);
    CPPUNIT_TEST(testSetDexterity);
    CPPUNIT_TEST(testSetConstitution);
    CPPUNIT_TEST(testSetIntelligence);
    CPPUNIT_TEST(testSetWisdom);
    CPPUNIT_TEST(testSetCharisma);
    CPPUNIT_TEST(testSetStrengthMod);
    CPPUNIT_TEST(testSetDexterityMod);
    CPPUNIT_TEST(testSetConstitutionMod);
    CPPUNIT_TEST(testSetIntelligenceMod);
    CPPUNIT_TEST(testSetWisdomMod);
    CPPUNIT_TEST(testSetCharismaMod);
    CPPUNIT_TEST(testSetArmorClass);
    CPPUNIT_TEST(testGetName);
    CPPUNIT_TEST(testGetLevel);
    CPPUNIT_TEST(testGetStrength);
    CPPUNIT_TEST(testGetDexterity);
    CPPUNIT_TEST(testGetConstitution);
    CPPUNIT_TEST(testGetIntelligence);
    CPPUNIT_TEST(testGetWisdom);
    CPPUNIT_TEST(testGetCharisma);
    CPPUNIT_TEST(testGetStrengthMod);
    CPPUNIT_TEST(testGetDexterityMod);
    CPPUNIT_TEST(testGetConstitutionMod);
    CPPUNIT_TEST(testGetIntelligenceMod);
    CPPUNIT_TEST(testGetWisdomMod);
    CPPUNIT_TEST(testGetCharismaMod);
    CPPUNIT_TEST(testGetAbilityModifier);
    CPPUNIT_TEST(testGetHP);
    CPPUNIT_TEST(testGetArmorClass);
    CPPUNIT_TEST(testRollD20);
    CPPUNIT_TEST(testRollD10);
    CPPUNIT_TEST(testGetRollsDice);
    CPPUNIT_TEST(testLevelUp);
    CPPUNIT_TEST(testAttack1);
    CPPUNIT_TEST(testAttack2);
    CPPUNIT_TEST(testAttack3);
    CPPUNIT_TEST(testAttack4);
    CPPUNIT_TEST(testGetBaseAttackBonus1);
    CPPUNIT_TEST(testGetBaseAttackBonus2);
    CPPUNIT_TEST(testGetBaseAttackBonus3);
    CPPUNIT_TEST(testGetBaseAttackBonus4);
    CPPUNIT_TEST(testSave);
    CPPUNIT_TEST(testLoad);
    CPPUNIT_TEST(testEquipItems);
    CPPUNIT_TEST(testShowInfo);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass1();
    virtual ~newtestclass1();
    void setUp();
    void tearDown();

private:
    void testCharacter();
    void testCharacter2();
    void testCharacter3();
    void testSetName();
    void testSetLevel();
    void testSetType();
    void testAssignScores();
    void testRandomAbilityScores();
    void testGetHighestAbilityScore();
    void testSetStrength();
    void testSetDexterity();
    void testSetConstitution();
    void testSetIntelligence();
    void testSetWisdom();
    void testSetCharisma();
    void testSetStrengthMod();
    void testSetDexterityMod();
    void testSetConstitutionMod();
    void testSetIntelligenceMod();
    void testSetWisdomMod();
    void testSetCharismaMod();
    void testSetArmorClass();
    void testGetName();
    void testGetLevel();
    void testGetStrength();
    void testGetDexterity();
    void testGetConstitution();
    void testGetIntelligence();
    void testGetWisdom();
    void testGetCharisma();
    void testGetStrengthMod();
    void testGetDexterityMod();
    void testGetConstitutionMod();
    void testGetIntelligenceMod();
    void testGetWisdomMod();
    void testGetCharismaMod();
    void testGetAbilityModifier();
    void testGetHP();
    void testGetArmorClass();
    void testRollD20();
    void testRollD10();
    void testGetRollsDice();
    void testLevelUp();
    void testAttack1();
    void testAttack2();
    void testAttack3();
    void testAttack4();
    void testGetBaseAttackBonus1();
    void testGetBaseAttackBonus2();
    void testGetBaseAttackBonus3();
    void testGetBaseAttackBonus4();
    void testSave();
    void testLoad();
    void testEquipItems();
    void testShowInfo();

};

#endif /* NEWTESTCLASS1_H */

