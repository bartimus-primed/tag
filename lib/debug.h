#ifndef tag_debug_h
#define tag_debug_h
#include "chunk.h"

// Function declarations for disassembling
void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);
static int simpleInstruction(const char* name, int offset);
static int constantInstruction(const char* name, Chunk* chunk, int offset);
#endif