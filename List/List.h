#pragma once

#include "Node.h"

class List
{
private:
	int size;
	Node* head;

public:
	List() : head(nullptr), size(0) {};
	~List();
	void add(Node*);
	void insert(Node*);
	int getSize() { return size; }

	friend std::ostream& operator<<(std::ostream& os, const List& obj);
};

