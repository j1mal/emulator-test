#include <stdio.h>


unsigned char PC = 0; // the program counter . it stores 0 to 256
unsigned char memory[256]; // the memory.
unsigned char A = 0;
unsigned char B = 0;

int running = 1;



void sampleProgram() {
    printf("RUNNING SAMPLE PROGRAM.\n");
    memory[0] = 1;   // LOAD 10
    memory[1] = 10;

    memory[2] = 2;   // ADD 5
    memory[3] = 5;

    memory[4] = 3;   // PRINT

    memory[5] = 255; // HALT
}

int main() {
    printf("EMULATOR STARTED.\n");
    sampleProgram();
    while (running) {
        unsigned char opcode = memory[PC]; //setting the opcode to 1
       
        switch (opcode) {

        case 1:  // LOAD
            A = memory[PC + 1];
            PC += 2;
            break;

        case 2:  // ADD
            A += memory[PC + 1];
            PC += 2;
            break;

        case 3:  // PRINT
            printf("%d\n", A);
            PC += 1;
            break;

        case 255: // HALT
            running = 0;
            PC += 1;
            break;

        default:
            printf("Unknown opcode: %d\n", opcode);
            running = 0;
        }

        
    
    
    
    }
    
    return 0;


}