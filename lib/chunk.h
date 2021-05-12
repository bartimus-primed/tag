#ifndef tag_chunk_h
#define tag_chunk_h
#include "common.h"
#include "value.h"


// Supported OP codes that the VM uses
typedef enum {
    OP_CONSTANT,
    OP_ADD,
    OP_SUBTRACT,
    OP_MULTIPLY,
    OP_DIVIDE,
    OP_NEGATE,
    OP_RETURN,
} OPCODE;

// The main chunk structure that holds op codes and constant values
typedef struct {
    int count;
    int capacity;
    uint8_t* code;
    int* lines;
    ValueArray constants;
} Chunk;

// Function declarations for managing the chunks
void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte, int line);
int addConstant(Chunk* chunk, Value value);
// void writeConstant(Chunk* chunk, Value value, int line);
#endif
