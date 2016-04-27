#ifndef _NODE
#define _NODE

template <class T>
class Node {
private:
	T data;
	Node<T>* next;
public:
	Node();
	Node(T);
	Node(T, Node<T>*);
	void setData(T);
	T getData();
	void setNext(Node<T>*);
	Node<T>* getNext();
};

template <class T>
Node <T>::Node() {
	next = nullptr;
}

template <class T>
Node <T>::Node(T newData) {
	data = newData;
	next = nullptr;
}

template <class T>
Node <T>::Node(T newData, Node<T>* newPointer) {
	data = newData;
	next = newPointer;
}

template <class T>
void Node <T>::setData(T newData) {
	data = newData;
}

template <class T>
T Node<T>::getData() {
	return data;
}

template <class T>
void Node<T>::setNext(Node<T>* newPointer) {
	next = newPointer;
}

template <class T>
Node<T>* Node<T>::getNext() {
	return next;
}
#endif