#ifndef tag_vm_h
#define tag_vm_h

#include "chunk.h"
#include "value.h"

#define STACK_MAX 256

// Structure holding the state of the VM
typedef struct {
    Chunk* chunk;
    uint8_t* ip;
    Value stack[STACK_MAX];
    Value* stackTop;
} VM;

// Results for the code being ran
typedef enum {
    INTERPRET_OK,
    INTERPRET_COMPILE_ERROR,
    INTERPRET_RUNTIME_ERROR
} InterpretResult;


// Function declarations
void initVM();
void freeVM();
InterpretResult interpret(Chunk* chunk);
static InterpretResult run();
static void resetStack();
void push(Value value);
Value pop();
#endif