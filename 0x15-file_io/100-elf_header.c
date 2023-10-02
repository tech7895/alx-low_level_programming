#include <elf.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - This function checks if a file is an ELF file
 * @e_ident: the pointer to an array
 * Description: if not ELF file - exit code 98
 *
 * Return: void
 */
void check_elf(unsigned char *e_ident)
{
	int ids;

		for (ids = 0; ids < 4; ids++)
		{
		if (e_ident[ids] != 127 &&
		    e_ident[ids] != 'E' &&
		    e_ident[ids] != 'L' &&
		    e_ident[ids] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
		}
}

/**
 * print_magic -This function prints the magic numbers of an ELF header
 * @e_ident: the ELF magic numbers
 *
 * Description: the magic numbers are separated by spaces
 *
 * Return: void
 */
void print_magic(unsigned char *e_ident)
{
	int ids;

	printf("  Magic:   ");

	for (ids = 0; ids < EI_NIDENT; ids++)
	{
		printf("%02x", e_ident[ids]);

		if (ids == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - This function prints the class of an ELF header
 * @e_ident: the ELF class
 *
 * Return: void
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - This function prints the data of an ELF header
 * @e_ident: the ELF class
 *
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_version - This function prints the version of an ELF header
 * @e_ident: the ELF version
 *
 * Return: void
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osabi - This function prints the OS/ABI of an ELF header
 * @e_ident: the ELF version
 *
 * Return: void
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi - This function prints the ABI version
 * @e_ident: the ELF ABI version
 *
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * print_type - This function rints the type of an ELF header
 * @e_type: the ELF type
 * @e_ident: the ELF class
 *
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - This function prints the
 * entry point of an ELF header
 * @e_entry: the entry point
 * @e_ident: the ELF class
 *
 * Return: void
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e_entry);
	}

	else
	{
		printf("%#lx\n", e_entry);
	}
}

/**
 * close_elf - This function closes an ELF file
 * @elf: the ELF file
 * Description: if the close fails - exit code 98
 *
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - This function displays the information contained in the ELF header
 * @argc: The number of arguments
 * @argv: the array of arguments
 *
 * Return: 0
 * Description: If the function fails - exit code 98
 *
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int op, r;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(op, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(op);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);
	free(header);
	close_elf(op);
	return (0);
}
