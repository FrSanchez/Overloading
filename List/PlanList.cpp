#include "PlanList.h"

PlanList::~PlanList()
{
	PlanNode* next;
	while (head != nullptr) {
		next = head->getNext();
		delete(head);
		head = next;
	}
}

void PlanList::add(PlanNode* node) {
	if (node == nullptr) {
		return;
	}
	size++;
	if (head == nullptr) {
		head = node;
		return;
	}
	PlanNode* curr = head;
	while (curr->getNext() != nullptr) {
		curr = curr->getNext();
	}
	curr->setNext(node);
}

void PlanList::insert(PlanNode* node) {
	if (node == nullptr) {
		return;
	}
	size++;
	node->setNext(head);
	head = node;
}

std::ostream& operator<<(std::ostream& os, const PlanList& obj)
{
	PlanNode* curr = obj.head;
	while (curr != nullptr) {
		os << *curr->getPlan();
		curr = curr->getNext();
	}
	return os;
}