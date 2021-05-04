#include "lib/common.h"
#include "lib/chunk.h"

int main(int argc, const char* argv[]) {
    Chunk chunk;
    initChunk(&chunk);
    writeChunk(&chunk, _RETURN);
    freeChunk(&chunk);
    return 0;
}