//! @file 
//! @brief Header file for the ItemContainer class  
//! Yann's part

#ifndef ITEMCONTAINER_H
#define ITEMCONTAINER_H

#include <iostream>
#include <string>
#include<vector>
//#include "Item.h"

enum cType
{
	C_NONE = 0,
	BACKPACK = 1,
	WORN_ITEMS = 2,
	CHEST = 3
};

//! Class that implements an item container
class ItemContainer
{
public:
	// Default constructor
	ItemContainer();
	// Constructor
	ItemContainer(string, cType, vector<Item>);
	
	// method to add an item to the item container
	void addItem(Item);
	// method to remove the last item in the item container
	void removeItem();
	
	//get type
	string getName();
	cType getType();

	// method to get an item from the item container
	Item getItem(int i);
	// method to get the items of the container
	vector<Item> getItems();

	//setters
	void setName(string);
	void setType(cType);
	void setItems(vector<Item>);

	//to_string
	void to_string();
	
private:
	string c_name;
	cType c_type;
	vector<Item> v_items;
};

#endif

