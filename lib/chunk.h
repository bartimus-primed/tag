#ifndef tag_chunk_h
#define tag_chunk_h
#include "common.h"

typedef enum {
    _RETURN,
    _FUNCTION
} OPCODE;

typedef struct {
    int count;
    int capacity;
    uint8_t* code;
} Chunk;

void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte);

#endif
