#pragma once

#include "DietNode.h"

class DietList
{
private:
	int size;
	DietNode* head;

public:
	DietList() : head(nullptr), size(0) {};
	~DietList();
	void add(DietNode*);
	void insert(DietNode*);
	int getSize() { return size; }

	friend std::ostream& operator<<(std::ostream& os, const DietList& obj);
};

