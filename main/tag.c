#include "../lib/common.h"
#include "../lib/chunk.h"
#include "../lib/debug.h"
int main(int argc, const char* argv[]) {
    Chunk chunk;
    initChunk(&chunk);
    writeChunk(&chunk, OP_CONSTANT, 1);
    writeChunk(&chunk, addConstant(&chunk, 232.2), 1);
    writeChunk(&chunk, OP_RETURN, 1);
    writeChunk(&chunk, OP_RETURN, 3);
    disassembleChunk(&chunk, "test chunk");
    freeChunk(&chunk);
    return 0;
}