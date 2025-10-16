#include "buffer.h"

Buffer::Buffer(int cap) : capacity(cap) {}

void Buffer::add(int value){
    this->data.append(value);
}

int Buffer::extract(){
    int value = data.first();
    data.removeFirst();
    return value;
}
