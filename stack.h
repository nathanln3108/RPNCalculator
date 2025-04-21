#ifndef Stack_h
#define Stack_h

#include "Arduino.h"

class Stack
{
  public:
    Stack(uint8_t size = 20);  // Default size is 20
    void push(float operand);
    float pop();
    float peek();
    boolean isFull();
    boolean isEmpty();
    uint8_t getSize();

  private:
    int8_t _top;
    uint8_t _capacity;
    float _stack[20];  // Fixed size array, you can adjust size if needed
};

#endif
