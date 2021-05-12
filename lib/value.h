#ifndef tag_value_h
#define tag_value_h

#include "common.h"


typedef double Value;

// An array that stores values used by the language
typedef struct {
    int capacity;
    int count;
    Value* values;
} ValueArray;

// Function declarations for a value
void initValueArray(ValueArray* array);
void writeValueArray(ValueArray* array, Value value);
void freeValueArray(ValueArray* array);
void printValue(Value value);

#endif