#ifndef PROCESS_H
#define PROCESS_H
#include <stdio.h>
#include "pcb.h"
int create_process(size_t required_memory){
    PCB pcb;
    pcb.pid = current_pid++;
    pcb.state = READY;
}
#endif