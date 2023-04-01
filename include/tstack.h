
// Copyright 2021 NNTU-CS
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
    type pop() {
        return arr[top--];
    }
};

#endif  // INCLUDE_TSTACK_H_
