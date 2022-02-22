#pragma once
#include <iostream>
#include "Diet.h"

class DietNode
{
private:
	Diet* plan;
	DietNode* next;

public:
	DietNode() : next(nullptr) {};
	DietNode(Diet* p) : plan(p) , next(nullptr) {};
	
	void setPlan(Diet* p) { plan = p; }
	Diet* getPlan() { return plan; }

	DietNode* getNext() { return next;  }
	void setNext(DietNode* n) { next = n;  }

	friend std::ostream& operator<<(std::ostream& os, const DietNode& obj);
	friend std::istream& operator>>(std::istream& is, DietNode& obj);
};


