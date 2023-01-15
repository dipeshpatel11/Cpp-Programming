// Name: DIPESH PATEL
// SID:  1722408
// CCID: dipesh1

// CMPUT275, Winter2022

// Weekly Exercise 3
#include "ref_manager.h"
#include <cassert>
using namespace std;

ReferenceManager::ReferenceManager() {
  int i = 0;
  while (i < MAX_PTRS) {
    pointers[i] = NULL;
    i +=1;
  }
}

ReferenceManager::~ReferenceManager() {
  for (int c = 0; c < MAX_PTRS; c++) {
    reassignPointer(c, NULL);
  }
  garbageCollect();
}
void ReferenceManager::garbageCollect() {
  int n = 0;
  while (n < numToDelete) {
    cout << garbage[n] << endl;
    delete garbage[n];
    n++;
  }
  numToDelete = 0;
}


void ReferenceManager::reassignPointer(unsigned int ptrIndex,
const char *newAddr) {
  refCount[getPtr(ptrIndex)]--;

  while (true) {
    if (refCount[getPtr(ptrIndex)] == 0) {
    garbage[numToDelete] = getPtr(ptrIndex);
    numToDelete++;
    }
    break;
  }
  pointers[ptrIndex] = newAddr;
  refCount[newAddr]++;
}



void ReferenceManager::readString(unsigned int ptrIndex, unsigned int length) {
  char *s = new char[length];
  cin >> s;
  reassignPointer(ptrIndex, s);
}

const char *ReferenceManager::getPtr(unsigned int ptrIndex) {
  assert(ptrIndex < MAX_PTRS);
  return pointers[ptrIndex];
}
