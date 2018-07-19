//StackInterface.h

#ifndef STACK_INTERFACE_
#define STACK_INTERFACE_

//Defines the maximum size of the stack.
//For the purposes of this project, 10,000 is more than sufficient.
//However, it could be easily adjusted if necessary.
const int maxStack = 10000;

//This stack is templatized to allow for code reuse.
template<class ItemType>
class StackInterface
{
private:
  //Creates an array of appropriate size for this array implementation of a stack.
  ItemType items [maxStack];
  //Stores the index of the top item in the stack.
  int top;

public:
    //StackInterface:
    //Constructor.
    StackInterface();
    //isEmpty:
    //Checks to see if the stack is empty.
    //@return True if the stack is empty, false if the stack is not.
    bool isEmpty() const;
    //push:
    //Adds a new entry to the top of this stack.
    //@post If the operation was successful, newEntry is at the top of the stack.
    //@param newEntry The object to be added to the top of the stack.
    //@return True if the addition is successful, false if the addition was not.
    bool push(const ItemType& newEntry);

    //pop:
    //Removes the item at the top of the stack.
    //@post If the operation was successful, the top of the stack has been removed.
    //@return True if the removal is successful, false if the removal is not.
    bool pop();

    //peek:
    //THROWS STANDARD EXCEPTION.
    //Returns the item at the top of the stack.
    //@pre The stack contains at least one item.
    //@post The top of the stack has been returned, and the stack is unchanged.
    //@return The item at the top of the stack.
    ItemType peek() const;

    //~StackInterface:
    //Destructor. Destroys the object and frees the memory allocated by the object.
   ~StackInterface() {  }
};
#endif
