#ifndef elf_header
#define elf_header

#include "inst/inst.h"

#define INST_LEN 15

inst_t program[INST_LEN];

inst_t *build_inst();

#endif