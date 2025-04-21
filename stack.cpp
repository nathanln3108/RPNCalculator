#include "Arduino.h"
#include "Stack.h"

Stack::Stack(uint8_t size){
  _top = -1;
  _capacity = size;
}

void Stack::push(float operand){
  if (!isFull()) {
    _stack[++_top] = operand;
  }
}

float Stack::pop(){
  if (!isEmpty()) {
    return _stack[_top--];
  }
  return NAN;  // Return NaN if the stack is empty
}

float Stack::peek(){
  if (!isEmpty()) {
    return _stack[_top];
  }
  return NAN;  // Return NaN if the stack is empty
}

boolean Stack::isFull(){
  return _top == _capacity - 1;
}

boolean Stack::isEmpty(){
  return _top == -1;
}
