#include "List.h"

List::~List()
{
	Node* next;
	while (head != nullptr) {
		next = head->getNext();
		delete(head);
		head = next;
	}
}

void List::add(Node* node) {
	if (node == nullptr) {
		return;
	}
	size++;
	if (head == nullptr) {
		head = node;
		return;
	}
	Node* curr = head;
	while (curr->getNext() != nullptr) {
		curr = curr->getNext();
	}
	curr->setNext(node);
}

void List::insert(Node* node) {
	if (node == nullptr) {
		return;
	}
	size++;
	node->setNext(head);
	head = node;
}

std::ostream& operator<<(std::ostream& os, const List& obj)
{
	Node* curr = obj.head;
	while (curr != nullptr) {
		os << *curr->getPlan();
		curr = curr->getNext();
	}
	return os;
}