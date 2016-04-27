#ifndef _LINKED_LIST
#define _LINKED_LIST
#include "Node.cpp"
#include <iostream>

template <class T>
class LinkedList{
private:
	Node<T> header;
	Node<T>* first;
	Node<T>* last;
	int length;
public:
	LinkedList();
	void insertAt(Node<T>&, int);
	void pushFront(Node<T>&);
	void popFront();
	void pushBack(Node<T>&);
	void popBack();
	int getLength() { return length; }
	void printList();
	void deleteAt(int);
	int find(T);
	void clearList();
};

template <class T>
LinkedList<T>::LinkedList() {
	length = 0;
	first = nullptr;
	last = nullptr;
}

template <class T>
void LinkedList<T>::pushFront( Node<T> &node) {
	if (length == 0) {
		first = &node;
		last = &node;
		header.setNext(first);
		length++;
	}
	else {
		node.setNext(first);
		first = &node;
		header.setNext(first);
		length++;
	}
}

template <class T>
void LinkedList<T>::popFront() {
	if (length!=0) {
		header.setNext(first->getNext());
		first = header.getNext();
		length--;
	}
	else {
		std::cout << "List already empty" << endl;
	}
}

template <class T>
void LinkedList<T>::pushBack(Node<T> &node) {
	if (length == 0) {
		first = &node;
		last = &node;
		header.setNext(first);
		length++;
	}
	else {
		last->setNext(&node);
		last = &node;
		length++;
	}
}

template <class T>
void LinkedList<T>::popBack() {
	if (length != 0) {
		Node<T>* secondToLast=first;
		while (secondToLast->getNext() != last) {
			secondToLast = secondToLast->getNext();
		}
		secondToLast->setNext(nullptr);
		last = secondToLast;
		length--;
	}
	else {
		std::cout << "List already empty" << endl;
	}
}

template <class T>
void LinkedList<T>::printList() {
	if (length != 0) {
		Node<T>* nextNode = first;
		while (nextNode != nullptr) {
			std::cout << nextNode->getData() << endl;
			nextNode = nextNode->getNext();
		}
	}
	else {
		std::cout << "List is empty" << endl;
		return;
	}
}

template <class T>
void LinkedList<T>::insertAt(Node<T>& n, int index) {
	if (index == 0) {
		pushFront(n);
	}
	else if (index == length) {
		pushBack(n);
	}
	else if (index<0 || index>length) {
		std::cout << "Invalid index" << endl;
		return;
	}
	else {
		Node<T>* currentAtIndex=first;
		for (int i = 0; i < index-1; i++) {
			currentAtIndex = currentAtIndex->getNext();
		}
		n.setNext(currentAtIndex->getNext());
		currentAtIndex->setNext(&n);
		length++;
	}
}

template <class T>
void LinkedList<T>::deleteAt(int index) {
	if (index == 0) {
		popFront();
	}
	else if (index == length-1) {
		popBack();
	}
	else if (index < 0 || index >= length) {
		std::cout << "Invalid index" << endl;
		return;
	}
	else {
		Node<T>* currentAtIndex = first;
		for (int i = 0; i < index; i++) {
			currentAtIndex = currentAtIndex->getNext();
		}
		Node<T>* before = first;
		while (before->getNext() != currentAtIndex) {
			before = before->getNext();
		}
		before->setNext(currentAtIndex->getNext());
		currentAtIndex->setNext(nullptr);
		length--;
	}
}

template <class T>
int LinkedList<T>::find(T data) {
	Node<T>* currentAtIndex = first;
	for (int i = 0; i < length; i++) {
		if (currentAtIndex->getData() == data) {
			return i;
		}
		currentAtIndex = currentAtIndex->getNext();
	}
	return -1;
}

template <class T>
void LinkedList<T>::clearList() {
	header.setNext(nullptr);
	first = nullptr;
	last = nullptr;
	length = 0;
}

#endif