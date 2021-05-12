#ifndef tag_memory_h
#define tag_memory_h

#include "common.h"

// Set initial Capacity or Double the current
#define GROW_CAPACITY(capacity) \
    ((capacity) < 8 ? 8 : (capacity) * 2)

// Grow an array
#define GROW_ARRAY(type, pointer, oldCount, newCount) \
    (type*)reallocate(pointer, sizeof(type) * (oldCount), sizeof(type) * (newCount))

// Free an array
#define FREE_ARRAY(type, pointer, oldCount) \
    reallocate(pointer, sizeof(type) * (oldCount), 0)

// Wrap the realloc that libc gives us
void* reallocate(void* pointer, size_t oldSize, size_t newSize);

#endif