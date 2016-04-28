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
	
	Stack <int> i_stack;
    i_stack.push(one);
    i_stack.push(two);
    i_stack.push(four);
    i_stack.showStack();
    cout<<endl;
    
    Node<string> name1("John");
    Node<string> name2("Adrian");
    Node<string> name3("James");
    Node<string> name4("Laura");
    
    Stack <string> s_string;
    s_string.push(name1);
    s_string.push(name2);
    s_string.push(name3);
    s_string.push(name4);
    s_string.pop();
    s_string.showStack();
    s_string.push(name1);
    s_string.clearStack();
    s_string.showStack();
    
   
	return 0;
}
