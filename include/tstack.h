
// Copyright 2021 NNTU-CS
#include <string>
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

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
    bool isEmpty() {
        return top == -1;
    }
    void push(type a) {
        arr[++top] = a;
    }
    const type& get() {
    if (isEmpty()) {
      throw std::string("empty");
    } else {
      return arr[top];
    }
  }
    type pop() {
        return arr[top--];
    }
};

#endif  // INCLUDE_TSTACK_H_
