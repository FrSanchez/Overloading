#include "DietList.h"

DietList::~DietList()
{
	DietNode* next;
	while (head != nullptr) {
		next = head->getNext();
		delete(head);
		head = next;
	}
}

void DietList::add(DietNode* node) {
	if (node == nullptr) {
		return;
	}
	size++;
	if (head == nullptr) {
		head = node;
		return;
	}
	DietNode* curr = head;
	while (curr->getNext() != nullptr) {
		curr = curr->getNext();
	}
	curr->setNext(node);
}

void DietList::insert(DietNode* node) {
	if (node == nullptr) {
		return;
	}
	size++;
	node->setNext(head);
	head = node;
}

std::ostream& operator<<(std::ostream& os, const DietList& obj)
{
	DietNode* curr = obj.head;
	while (curr != nullptr) {
		os << *curr->getPlan();
		curr = curr->getNext();
	}
	return os;
}