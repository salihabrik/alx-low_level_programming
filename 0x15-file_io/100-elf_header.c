#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>

#define EI_NIDENT 16

typedef struct
{
    unsigned char e_ident[EI_NIDENT];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} 

void print_error(const char *message)
{
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

void print_magic(unsigned char *magic)
{
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) 
    {
        printf("%02x ", magic[i]);
    }
    printf("\n");
}

void print_class(unsigned char class) 
{
    printf("  Class:                             ");
    switch (class)
    {
        case 1:
            printf("ELF32\n");
            break;
        case 2:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown>\n");
    }
}
void print_data(unsigned char data)
{
    printf("  Data: ");
    switch (data)
    {
        case 1:
            printf("2's complement, little endian\n");
            break;
        case 2:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown>\n");
    }
}
void print_os_abi(unsigned char os_abi) 
{
    printf("  OS
void print_type(uint16_t type) 
{
    printf("  Type:  ");
    switch (type) 
    {
        case 1:
            printf("REL (Relocatable file)\n");
            break;
        case 2:
            printf("EXEC (Executable file)\n");
            break;
        case 3:
            printf("DYN (Shared object file)\n");
            break;
        default:
            printf("<unknown>\n");
    }
}


void read_elf_header(const char *filename) 
{
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error("Cannot open file");
    }

    Elf64_Ehdr header;
    if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        print_error("Cannot read ELF header");
    }

    clos
 int main(int argc, char *argv[]) 
 {
    if (argc != 2) 
    {
        print_error("Usage: elf_header elf_filename");
    }

    read_elf_header(argv[1]);


    return 0;
}   



