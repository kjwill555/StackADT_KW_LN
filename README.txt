The Stack ADT should inherit the LinkedList class and add the following functions:

push(Node<T>&): adds the Node to the top (end) of the stack. You can just use LinkedList's pushBack() for this. returns nothing.

pop(): deletes the top (last) node. You can just use LinkedList's popBack() for this. returns nothing

stackTop(): returns the data in the top (last) node without changing the stack. LinkedList has an attribute called last which contains a pointer to the last node in the list, you can use this in your algorithm.

isEmpty(): returns true if the stack is empty, false if not. Use LinkedList's length attribute to help you.

clearStack(): deletes all contents. This can just call LinkedList's clearList()


Then write a main() that creates a couple stacks that contain different types of data and demonstrates the different stack functions
