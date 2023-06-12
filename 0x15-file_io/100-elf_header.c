#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>
#include <sys/types.h>

typedef struct {
unsigned char e_ident[16];
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
} Elf64_Ehdr;

void print_error(const char *message) {
fprintf(stderr, "Error: %s\n", message);
exit(98);
}

void display_elf_header(const Elf64_Ehdr *header) {
printf("Magic: ");
for (int i = 0; i < 16; ++i) {
printf("%02x ", header->e_ident[i]);
}
printf("\n");

printf("Class: %u\n", header->e_ident[4]);

printf("Data: %u\n", header->e_ident[5]);

printf("Version: %u\n", header->e_ident[6]);

printf("OS/ABI: %u\n", header->e_ident[7]);

printf("ABI Version: %u\n", header->e_ident[8]);

printf("Type: %u\n", header->e_type);

printf("Entry point address: 0x%llx\n", header->e_entry);
}

int main(int argc, char *argv[]) {
if (argc != 2) {
print_error("Invalid number of arguments");
}

const char *filename = argv[1];
int fd = open(filename, O_RDONLY);
if (fd == -1) {
print_error("Failed to open file");
}

Elf64_Ehdr header;
if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
print_error("Failed to read ELF header");
}

// Check if the file is an ELF file
//     if (header.e_ident[0] != 0x7f || header.e_ident[1] != 'E' || header.e_ident[2] != 'L' || header.e_ident[3] != 'F') {
//             print_error("Not an ELF file");
//                 }
//
//                     display_elf_header(&header);
//
//                         close(fd);
//                             return 0;
//                             }
//
