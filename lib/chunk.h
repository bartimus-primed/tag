#ifndef tag_chunk_h
#define tag_chunk_h
#include "common.h"
#include "value.h"

typedef enum {
    OP_RETURN,
    OP_CONSTANT
} OPCODE;

typedef struct {
    int count;
    int capacity;
    uint8_t* code;
    int* lines;
    ValueArray constants;
} Chunk;

void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte);
int addConstant(Chunk* chunk, Value value);

#endif
