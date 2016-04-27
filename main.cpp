#include "LinkedList.cpp"
#include <vector>

using namespace std;

int main() {
	Node<int> one(1);
	Node<int> two(2);
	Node<int> three(3);
	Node<int> four(4);
	Node<int> five(5);

	Node<int> hundred(100);

	LinkedList<int> list;
	list.pushFront(five);
	list.pushFront(four);
	list.pushFront(three);
	list.pushFront(two);
	list.pushFront(one);
	list.printList();
	cout << endl;
	list.insertAt(hundred, 3);
	list.printList();
	cout << endl;
	list.clearList();
	list.printList();
	return 0;
}