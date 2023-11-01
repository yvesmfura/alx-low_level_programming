#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "elf_header.h"

/**
 * display_error - Display error message and exit
 * @message: Error message to display
 */


void display_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * display_elf_header_info - Display information from ELF header
 * @header: Pointer to the ELF header structure
 */

void display_elf_header_info(const struct ElfHeader *header)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("Class: %s\n", (header->e_ident[4] == 1) ? "ELF32" : "ELF64");

	printf("Data: %s\n", (header->e_ident[5] == 1) ?
	"Little Endian" : "Big Endian");
	printf("Version: %d\n", header->e_ident[6]);

	printf("OS/ABI: %d\n", header->e_ident[7]);

	printf("ABI Version: %d\n", header->e_ident[8]);

	printf("Type: %hu\n", header->e_type);

	printf("Entry point address: %lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, non-zero on failure
 */

int main(int argc, char *argv[])
{
	int fd;
	struct ElfHeader header;

	if (argc != 2)
	{
		display_error("Usage: elf_header elf_filename");
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		display_error("Error opening file");
	}

	if (read(fd, &header, sizeof(struct ElfHeader)) != sizeof(struct ElfHeader))
	{
		display_error("Error reading ELF header");
	}
	if (!(header.e_ident[0] == 0x7f &&
	header.e_ident[1] == 'E' &&
	header.e_ident[2] == 'L' &&
	header.e_ident[3] == 'F'))
	{
		display_error("Not an ELF file");
	}

	display_elf_header_info(&header);

	close(fd);
	return (0);
}

