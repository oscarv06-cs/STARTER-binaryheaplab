// heap.cpp
// Diba Mirza

#include "heap.h"
#include <iostream>
using std::cout;

// Pushes a value into the heap, then ensures
// the heap is correctly arranged
void Heap::push(int value){
  data.push_back(value);
  size_t i = data.size() - 1;
  while (i > 0) {
    std::size_t p = (i - 1) / 2;        
    if (data[i] < data[p]) {
        std::swap(data[i], data[p]);
        i = p;                          
    } else {
        break;                           
    }
  }

}

// Pops the minimum value off the heap
// (but does not return it), then ensures
// the heap is correctly arranged
void Heap::pop(){
  if (data.empty()){
    return;
  }
  std::data[0] = data.back();
  std::data.pop_back();
  if (data.empty()) return;
  std::size_t i = 0, n = data.size();
    while (true) {
        std::size_t l = 2 * i + 1; // left child
        std::size_t r = 2 * i + 2;// right child
        std::size_t smallest = i;

        if (l < n && data[l] < data[smallest]){
          smallest = l;
        }
        if (r < n && data[r] < data[smallest]){
          smallest = r;
        }
        if (smallest == i){
          break;
        } 

        std::swap(data[i], data[smallest]);
        i = smallest;
    }

}

// Returns the minimum element in the heap
int Heap::top(){
  if (data.empty()){
    throw std::out_of_range("Null");
  }
  return data[0];
}

// Returns true if the heap is empty, false otherwise
bool Heap::empty(){
  if (data.empty()){
    return true;
  }
  return false;
}
    