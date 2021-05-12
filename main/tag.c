#include "../lib/common.h"
#include "../lib/chunk.h"
#include "../lib/debug.h"
#include "../lib/vm.h"

// Testing binary operations on the vm stack
int main(int argc, const char* argv[]) {
    Chunk chunk;
    initVM();
    initChunk(&chunk);
    int con =  addConstant(&chunk, 1.23);
    int con1 =  addConstant(&chunk, 2);
    int con2 =  addConstant(&chunk, 3);
    writeChunk(&chunk, OP_CONSTANT, 1);
    writeChunk(&chunk, con, 1);
    writeChunk(&chunk, OP_CONSTANT, 1);
    writeChunk(&chunk, con1, 1);    
    writeChunk(&chunk, OP_CONSTANT, 1);
    writeChunk(&chunk, con2, 1);
    writeChunk(&chunk, OP_ADD, 2);
    writeChunk(&chunk, OP_NEGATE, 2);
    writeChunk(&chunk, OP_CONSTANT, 2);
    writeChunk(&chunk, con2, 2);
    writeChunk(&chunk, OP_NEGATE, 2);
    writeChunk(&chunk, OP_MULTIPLY, 3);
    writeChunk(&chunk, OP_CONSTANT, 3);
    writeChunk(&chunk, con1, 3);
    writeChunk(&chunk, OP_CONSTANT, 3);
    writeChunk(&chunk, con2, 3);
    writeChunk(&chunk, OP_NEGATE, 3);
    writeChunk(&chunk, OP_CONSTANT, 3);
    writeChunk(&chunk, con1, 3);
    writeChunk(&chunk, OP_RETURN, 4);
    interpret(&chunk);
    freeVM();
    freeChunk(&chunk);
    return 0;
}