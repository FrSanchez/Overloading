#pragma once

#include "PlanNode.h"

class PlanList
{
private:
	int size;
	PlanNode* head;

public:
	PlanList() : head(nullptr), size(0) {};
	~PlanList();
	void add(PlanNode*);
	void insert(PlanNode*);
	int getSize() { return size; }

	friend std::ostream& operator<<(std::ostream& os, const PlanList& obj);
};

