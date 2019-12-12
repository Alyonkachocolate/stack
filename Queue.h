
#ifndef UNTITLED24_QUEUE_H
#define UNTITLED24_QUEUE_H

#include <iostream>
#include <cstddef>
#include <stdexcept>

using std::cout;
using std::endl;
using std::out_of_range;

template<typename T>

class Queue {
    class Node {
        friend class Queue;

        const T value_;
        Node *next_ = nullptr;

        explicit Node(T value) : value_(value) {}
    };

    size_t size_ = 0;
    Node *first_ = nullptr;
    Node *last_ = nullptr;

public:
    ~Queue() {
        Node *node = first_;
        while (node != nullptr) {
            Node *next = node->next_;
            delete node;
            node = next;
        }
    }

    void push(T value) {
        Node *node = new Node(value);
        if (first_ = last_ = nullptr) {
            node->next_ = first_;
            first_ = last_ = node;
        } else {
            node->next_ = first_;
            first_ = node;
        }
        size_++;
    }

    T pop() {
        Node *removed;
        Node *node = first_;
        while (node != last_) {
            Node removed = node;
            node = node->next;
        };
        if (removed == nullptr) {
            throw out_of_range("This stack is empty");
        }
        if (size_ = 1) {
            first_ = last_ = nullptr;
        }
        last_ = removed;
        T value = removed->value_;
        delete removed;
        size_--;

        return value;
    }

    size_t size() const {
        return size_;
    };

    void print() {
        Node *node = first_;
        if (node == nullptr) {
            throw out_of_range("This stack is empty");
        }

        while (node != nullptr) {
            //Node *next = node->next_;
            cout << node->value_ << ' ';
            node = node->next_;
        }
        cout << endl;
    }


};


#endif //UNTITLED24_QUEUE_H
