#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void print_magic(unsigned char *ident);
void print_class(unsigned char *ident);
void print_data(unsigned char *ident);
void print_version(unsigned char *ident);
void print_abi(unsigned char *ident);
void print_osabi(unsigned char *ident);
void print_type(unsigned int type, unsigned char *ident);

/**
 * main - displays the information contained in the ELF header at the start
 * @argc: argument count
 * @argv: array of pointers to arguments
 *
 * Return: 0 on success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *h;
	int i, o, r;

	o = open(argv[1], O_RDONLY);

	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	h = malloc(sizeof(Elf64_Ehdr));

	if (h == NULL)
	{
		if (close(o) == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't close fd %d\n", o);
			exit(98);
		}
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	r = read(o, h, sizeof(Elf64_Ehdr));

	if (r == -1)
	{
		free(h);
		if (close(o) == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't close fd %d\n", o);
			exit(98);
		}
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	for (i = 0; i < 4; i++)
	{
		if (h->e_ident[i] != 127 &&
			h->e_ident[i] != 'E' &&
			h->e_ident[i] != 'L' &&
			h->e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}

	printf("ELF Header:\n");
	print_magic(h->e_ident);
	print_class(h->e_ident);
	print_data(h->e_ident);
	print_version(h->e_ident);
	print_osabi(h->e_ident);
	print_abi(h->e_ident);
	print_type(h->e_type, h->e_ident);

	printf("  Entry point address:               ");

	if (h->e_ident[EI_DATA] == ELFDATA2MSB)
	{
		h->e_entry = ((h->e_entry << 8) & 0xFF00FF00) |
					 ((h->e_entry >> 8) & 0xFF00FF);
		h->e_entry = (h->e_entry << 16) | (h->e_entry >> 16);
	}

	if (h->e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)h->e_entry);

	else
		printf("%#lx\n", h->e_entry);

	free(h);
	if (close(o) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", o);
		exit(98);
	}

	return (0);
}

/**
 * print_magic - prints the magic numbers of an ELF header
 * @ident: pointer to an array containing the ELF magic numbers
 *
 * Return: void
 */
void print_magic(unsigned char *ident)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - prints the class of an ELF header
 * @ident: pointer to an array containing the ELF class
 *
 * Return: void
 */
void print_class(unsigned char *ident)
{
	printf("  Class:                             ");

	switch (ident[EI_CLASS])
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
		printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}

/**
 * print_data - prints the data of an ELF header
 * @ident: pointer to an array containing the ELF data
 *
 * Return: void
 */
void print_data(unsigned char *ident)
{
	printf("  Data:                              ");

	switch (ident[EI_DATA])
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
		printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}

/**
 * print_version - prints the version of an ELF header
 * @ident: pointer to an array containing the ELF version
 *
 * Return: void
 */
void print_version(unsigned char *ident)
{
	printf("  Version:                           %d",
		   ident[EI_VERSION]);

	switch (ident[EI_VERSION])
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
 * print_osabi - prints the OS/ABI of an ELF header
 * @ident: pointer to an array containing the ELF OS/ABI
 *
 * Return: void
 */
void print_osabi(unsigned char *ident)
{
	printf("  OS/ABI:                            ");

	switch (ident[EI_OSABI])
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
		printf("<unknown: %x>\n", ident[EI_OSABI]);
	}
}

/**
 * print_abi - prints the ABI version of an ELF header
 * @ident: pointer to an array containing the ELF ABI version
 *
 * Return: void
 */
void print_abi(unsigned char *ident)
{
	printf("  ABI Version:                       %d\n",
		   ident[EI_ABIVERSION]);
}

/**
 * print_type - prints the type of an ELF header
 * @type: type of the ELF header
 * @ident: pointer to an array containing the ELF type
 *
 * Return: void
 */
void print_type(unsigned int type, unsigned char *ident)
{
	if (ident[EI_DATA] == ELFDATA2MSB)
		type >>= 8;

	printf("  Type:                              ");

	switch (type)
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
		printf("<unknown: %x>\n", type);
	}
}
