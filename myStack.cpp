//MyStack.cpp
//Implementation of StackInterface.h

#include <iostream>
#include "StackInterface.h"

//Implementation of constructor.
//Sets top to -1 to account for array's 0 index.
template <class ItemType>
StackInterface<ItemType>::StackInterface() : top (-1){
}

//Implementation of isEmpty.
//Returns true if top is less than 0, which would indicate an empty stack.
//Otherwise, it would return false.
template <class ItemType>
bool StackInterface<ItemType>::isEmpty() const {
        return top < 0;
}

//Implementation of push.
//First, push checks to see if there is still room in the array to add another item.
//If there is, top is incremented by 1, and the newEntry is inserted into the array at this new index.
//The boolean flag keeps track of whether or not the addition is successful. This boolean is ultimately returned.
template <class ItemType>
bool StackInterface<ItemType>::push (const ItemType& newEntry){
        bool flag = false;
        if (top < maxStack-1){
                top++;
                items[top] = newEntry;
                flag = true;
        }
        return flag;
}

//Implementation of pop.
//First, pop checks to see whether or not the stack is already empty.
//If it is not empty, top will then be decremented by 1.
//The items above top will then be overwritten when push is called.
//Again, the boolean flag keeps track of the success of the removal, and is ultimately returned.
template <class ItemType>
bool StackInterface<ItemType>::pop(){
        bool flag = false;
        if (!isEmpty()){
                top--;
                flag = true;
        }
        return flag;
}

//Implementation of peek.
//THROWS STANDARD EXCEPTION
//Checks to see if the stack is empty.
//If the stack is not empty, the top item of the stack is returned.
//If the stack is empty, the standard exception is thrown.
template <class ItemType>
ItemType StackInterface<ItemType>::peek() const {
        if(!isEmpty()){
                return items[top];
        }
        else {
          throw std::exception();
        }
}

template class StackInterface<char>;
