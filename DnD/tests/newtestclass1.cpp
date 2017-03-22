/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newtestclass1.cpp
 * Author: wa_he
 *
 * Created on Nov 27, 2016, 3:27:04 PM
 */

#include "newtestclass1.h"
#include "Character.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass1);

newtestclass1::newtestclass1() {
}

newtestclass1::~newtestclass1() {
}

void newtestclass1::setUp() {
}

void newtestclass1::tearDown() {
}

void newtestclass1::testCharacter() {
    Character character();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testCharacter2() {
    string name;
    int level;
    Character character(name, level);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testCharacter3() {
    int level;
    Character character(level);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testSetName() {
    string name;
    Character character;
    character.setName(name);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testSetLevel() {
    int level;
    Character character;
    character.setLevel(level);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testSetType() {
    string charType;
    Character character;
    character.setType(charType);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testAssignScores() {
    Character character;
    character.assignScores();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testRandomAbilityScores() {
    Character character;
    character.randomAbilityScores();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetHighestAbilityScore() {
    Character character;
    int result = character.getHighestAbilityScore();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testSetStrength() {
    int str;
    Character character;
    character.setStrength(str);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testSetDexterity() {
    int dex;
    Character character;
    character.setDexterity(dex);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testSetConstitution() {
    int con;
    Character character;
    character.setConstitution(con);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testSetIntelligence() {
    int intel;
    Character character;
    character.setIntelligence(intel);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testSetWisdom() {
    int wis;
    Character character;
    character.setWisdom(wis);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testSetCharisma() {
    int cha;
    Character character;
    character.setCharisma(cha);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testSetStrengthMod() {
    int str;
    Character character;
    character.setStrengthMod(str);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testSetDexterityMod() {
    int dex;
    Character character;
    character.setDexterityMod(dex);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testSetConstitutionMod() {
    int con;
    Character character;
    character.setConstitutionMod(con);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testSetIntelligenceMod() {
    int intel;
    Character character;
    character.setIntelligenceMod(intel);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testSetWisdomMod() {
    int wis;
    Character character;
    character.setWisdomMod(wis);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testSetCharismaMod() {
    int cha;
    Character character;
    character.setCharismaMod(cha);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testSetArmorClass() {
    Character character;
    character.setArmorClass();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetName() {
    Character character;
    string result = character.getName();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetLevel() {
    Character character;
    int result = character.getLevel();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetStrength() {
    Character character;
    int result = character.getStrength();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetDexterity() {
    Character character;
    int result = character.getDexterity();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetConstitution() {
    Character character;
    int result = character.getConstitution();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetIntelligence() {
    Character character;
    int result = character.getIntelligence();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetWisdom() {
    Character character;
    int result = character.getWisdom();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetCharisma() {
    Character character;
    int result = character.getCharisma();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetStrengthMod() {
    Character character;
    int result = character.getStrengthMod();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetDexterityMod() {
    Character character;
    int result = character.getDexterityMod();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetConstitutionMod() {
    Character character;
    int result = character.getConstitutionMod();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetIntelligenceMod() {
    Character character;
    int result = character.getIntelligenceMod();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetWisdomMod() {
    Character character;
    int result = character.getWisdomMod();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetCharismaMod() {
    Character character;
    int result = character.getCharismaMod();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetAbilityModifier() {
    double score;
    Character character;
    int result = character.getAbilityModifier(score);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetHP() {
    Character character;
    int result = character.getHP();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetArmorClass() {
    Character character;
    int result = character.getArmorClass();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testRollD20() {
    Character character;
    int result = character.rollD20();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testRollD10() {
    int num;
    Character character;
    int result = character.rollD10(num);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetRollsDice() {
    Character character;
    vector<int> result = character.getRollsDice();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testLevelUp() {
    Character character;
    character.levelUp();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testAttack1() {
    Character character;
    int result = character.attack1();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testAttack2() {
    Character character;
    int result = character.attack2();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testAttack3() {
    Character character;
    int result = character.attack3();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testAttack4() {
    Character character;
    int result = character.attack4();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetBaseAttackBonus1() {
    Character character;
    int result = character.getBaseAttackBonus1();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetBaseAttackBonus2() {
    Character character;
    int result = character.getBaseAttackBonus2();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetBaseAttackBonus3() {
    Character character;
    int result = character.getBaseAttackBonus3();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testGetBaseAttackBonus4() {
    Character character;
    int result = character.getBaseAttackBonus4();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testSave() {
    Character& ch;
    Character character;
    character.save(ch);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testLoad() {
    Character character;
    character.load();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testEquipItems() {
    int slot;
    Character character;
    character.equipItems(slot);
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

void newtestclass1::testShowInfo() {
    Character character;
    character.showInfo();
    if (true /*check result*/) {
        CPPUNIT_ASSERT(false);
    }
}

