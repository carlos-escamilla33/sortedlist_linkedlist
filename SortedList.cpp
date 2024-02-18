
#include "SortedList.h"


template<class T>
SortedList<T>::SortedList() {
    length = 0;
    head = nullptr;
    iterNode = nullptr;
}

template<class T>
void SortedList<T>::MakeEmpty() {

}

template<class T>
bool SortedList<T>::IsFull() const {
    return false;
}

template<class T>
int SortedList<T>::GetLength() const {
    return length;
}

template<class T>
bool SortedList<T>::Contains(T someItem) {
    NodeT *currN = head;

    while (currN != nullptr) {
        if (currN->info == someItem) {
            return true;
        } else if (currN->info > someItem) {
            break;
        }
        currN = currN->next;
    }

    return false;
}

template<class T>
void SortedList<T>::AddItem(T item) {
    NodeT* node = new NodeT;
    node->info = item;
    node->next = nullptr;

    if (head == nullptr) {
        head = node;
        length ++;
        return;
    }

    NodeT *currN = head;
    NodeT *prevN = nullptr;

    while (currN != nullptr) {

        if (currN->info > item) {
           node->next = currN;
            if (prevN != nullptr) {
                prevN->next = node;
            } else {
                head = node;
            }
            prevN->next = node;
            length ++;
            break;
        }
        prevN = currN;
        currN = currN->next;
    }

    prevN->next = node;
    length ++;
}

template<class T>
void SortedList<T>::DeleteItem(T item) {

}

template<class T>
void SortedList<T>::ResetIterator() {

}

template<class T>
int SortedList<T>::GetNextItem() {
    if (currentPos >= length) {
        throw "Out of bounds";
    }

    return T();
}

