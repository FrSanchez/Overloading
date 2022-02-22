#pragma once
#include <iostream>
#include "Plan.h"

class PlanNode
{
private:
	Plan* plan;
	PlanNode* next;

public:
	Plan* getPlan() { return plan;  }
	PlanNode() : next(nullptr) {};
	PlanNode(Plan* p) : plan(p) , next(nullptr) {};
	void setPlan(Plan* p) { plan = p; }
	PlanNode* getNext() { return next;  }
	void setNext(PlanNode* n) { next = n;  }

	friend std::ostream& operator<<(std::ostream& os, const PlanNode& obj);
	friend std::istream& operator >>(std::istream& is, PlanNode& obj);
};


