#ifndef _STACK
#define _STACK
#include "LinkedList.cpp"
#include "Node.cpp"

using namespace std;

template <class T>
class Stack {

public:
    Stack();
    void push(Node<T>&);
    void pop();
    T stackTop();
    bool isEmpty();
    void clearStack();
    void showStack();
};

template <class T>
void Stack<T>:: push(Node<T>&)
{
    LinkedList<T> L;
    L.pushBack(L.Node<T> &node);
}

template <class T>
void Stack<T>:: pop()
{
    LinkedList<T> L;
    L.popBack();
}

template <class T>
T Stack<T>:: stackTop()
{
    LinkedList <T> L;
    L.top();
    
}

template <class T>
bool Stack<T>:: isEmpty()
{
    LinkedList<T> L;
    if (L.getLength()==0)
        return true;
}

template <class T>
void Stack<T>:: clearStack()
{
    LinkedList<T> L;
    L.clearList();
}

template <class T>
void Stack<T>:: showStack()
{
    LinkedList<T> L;
    L.printList();
}

#endif
