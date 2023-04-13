#include <iostream>
#include <algorithm>//included for the count() function used in the function fromVector
#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList()
{
	Node* current = head;
	while (current)
	{
		Node* temp = current->next;
		delete current;
		current = temp;
	}
}

void LinkedList::add(int v, int o) {
	Node* newNode = new Node;
	newNode->value = v;
	newNode->occurences = o;
	newNode->next = nullptr;

	if (!head)
	{
		head = newNode;
	}
	else {
		Node* current = head;

		while (current->next)
		{
			current = current->next;
		}
		current->next = newNode;
	}
}

void LinkedList::remove(int v) {
	if (!head)
		return;

	if (head->value == v) {
		Node* temp = head;
		head = head->next;
		delete temp;
		return;
	}

	Node* current = head;
	while(current->next && current->next->value != v) {
		current = current->next;
	}

	if (current->next) {
		Node* temp = current->next;
		current->next = current->next->next;
		delete temp;
	}

}

void LinkedList::print()const {
	Node* current = head;
	while (current) {
		cout << current->value << " (" << current->occurences << ") -> ";
		current = current->next;
	}
	cout << "empty list" << endl;
}

int LinkedList::sum() {
	int sum = 0;
	Node* current = head;
	while (current) {
		sum += current->value * current->occurences; //adds the value of the node multiplied by the number of times it is repeated to the total
		current = current->next;
	}
	return sum;
}

static LinkedList fromVector(const std::vector<int>& v) {
	LinkedList list;
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); ++it) {

	}

}