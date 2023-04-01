// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_
#include <string>

template<typename type, int size>
  class TStack {
  private:
    type* arr;
    int top;
    
  public:
    TStack() {
        arr = new type[size];
        top = -1;
    }
    const type& get() {
    if (isEmpty()) {
      throw std::string("empty");
    } else {
      return arr[top];
    }
  }
    bool isEmpty() const {
        return top == -1;
    }
    bool isFull() const {
        return top == size -1;
    }
    void pop() {
        if (top >= 0)
            top--;
    }
    void push(type item) {
        if (top <size-1)
            arr[++top] = item;
    }
};

#endif  // INCLUDE_TSTACK_H_
