#include "stackTrace.hpp"

stackTrace s(SIZE);

stackTrace::stackTrace(int size)
{
    _T
    arr = new string[size];
    capacity = size;
    top = -1;
}
 
// Destructor to free memory allocated to the stackTrace
stackTrace::~stackTrace(){

    empty();
    delete[] arr;
}
 
// Utility function to add an element `x` to the stackTrace
void stackTrace::push(string x)
{
    
    if (isFull())
    {
        cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    x = "->" + x;
    arr[++top] = x;
}
 
// Utility function to pop a top element from the stackTrace
string stackTrace::pop()
{
    
    // check for stackTrace underflow
    if (isEmpty())
    {
        exit(EXIT_FAILURE);
    }
 
    // decrease stackTrace size by 1 and (optionally) return the popped element
    return arr[top--];
}

// Utility function to return the size of the stackTrace
int stackTrace::size() {
    return top + 1;
}
 
// Utility function to check if the stackTrace is empty or not
bool stackTrace::isEmpty() {
    return top == -1;               // or return size() == 0;
}
 
// Utility function to check if the stackTrace is full or not
bool stackTrace::isFull() {
    return top == capacity - 1;     // or return size() == capacity;
}

void stackTrace::empty() {
  _T
  for(int i=0; i< top+1; i++)
  {  cout << pop() << endl; }
}


