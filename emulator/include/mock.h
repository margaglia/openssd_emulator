#include <stdio.h>
#include <stdint.h>

void initDRAM();
void initFlash();

void writeToOpenSSD(const uint64_t lba, const uint64_t numSectors, void * buffer);
void readFromOpenSSD(const uint64_t lba, const uint64_t numSectors, void * buffer);

extern FILE * logFile;
