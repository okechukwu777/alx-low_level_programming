#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

#define BUF_SIZE 4096

void print_error(const char *message) {
	fprintf(stderr, "%s\n", message);
	exit(98);
}

void display_elf_header(const char *filename) {
	int fd;
	char buf[BUF_SIZE];
	ssize_t bytes_read;
	Elf64_Ehdr *elf_header;
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		print_error("Error opening file");

	bytes_read = read(fd, buf, sizeof(Elf64_Ehdr));
	if (bytes_read == -1)
		print_error("Error reading ELF header");

	elf_header = (Elf64_Ehdr *)buf;

	if (elf_header->e_ident[EI_MAG0] != ELFMAG0 ||
		elf_header->e_ident[EI_MAG1] != ELFMAG1 ||
		elf_header->e_ident[EI_MAG2] != ELFMAG2 ||
		elf_header->e_ident[EI_MAG3] != ELFMAG3)
		print_error("Not an ELF file");
	printf("Magic: %.4s\n", elf_header->e_ident);
	printf("Class: %s\n", elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data: %s\n", elf_header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d\n", elf_header->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", elf_header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", elf_header->e_type);
	printf("Entry point address: %lx\n", elf_header->e_entry);

	close(fd);
}

int main(int argc, char *argv[]) {
	if (argc != 2) {
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	display_elf_header(argv[1]);

	return 0;
}
