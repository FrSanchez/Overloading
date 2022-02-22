#pragma once
#include <iostream>
#include "PlanData.h"

class Node
{
private:
	PlanData* plan;
	Node* next;

public:
	Node() : next(nullptr) {};
	Node(PlanData* p) : plan(p) , next(nullptr) {};
	~Node();
	
	void setPlan(PlanData* p) { plan = p; }
	PlanData* getPlan() { return plan; }

	Node* getNext() { return next;  }
	void setNext(Node* n) { next = n;  }

	friend std::ostream& operator<<(std::ostream& os, const Node& obj);
	friend std::istream& operator>>(std::istream& is, Node& obj);
};


