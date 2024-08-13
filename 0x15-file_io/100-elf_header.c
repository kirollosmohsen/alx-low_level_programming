#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_error - Prints an error message to stderr and exits with code 98
 * @msg: Error message to print
 */
void print_error(const char *msg)
{
dprintf(STDERR_FILENO, "%s\n", msg);
exit(98);
}

/**
 * main - Displays information from the ELF header of a file
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;

/* Check for correct number of arguments */
if (argc != 2)
print_error("Usage: elf_header elf_filename");

/* Open the file */
fd = open(argv[1], O_RDONLY);
if (fd == -1)
print_error("Error: Can't read file");

/* Read the ELF header */
if (read(fd, &header, sizeof(header)) != sizeof(header))
print_error("Error: Can't read ELF header");

/* Check if it's an ELF file */
if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
print_error("Error: Not an ELF file");

/* Print the ELF header information */
printf("ELF Header:\n");
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
printf("%02x ", header.e_ident[i]);
printf("\n");

printf("  Class:                             %s\n",
header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Unknown");

printf("  Data:                              %s\n",
header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Unknown");

printf("  Version:                           %d (current)\n",
header.e_ident[EI_VERSION]);

printf("  OS/ABI:                            ");
switch (header.e_ident[EI_OSABI])
{
case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
case ELFOSABI_ARM: printf("ARM\n"); break;
case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
default: printf("<unknown: %x>\n", header.e_ident[EI_OSABI]);
}

printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);

printf("  Type:                              ");
switch (header.e_type)
{
case ET_NONE: printf("NONE (None)\n"); break;
case ET_REL: printf("REL (Relocatable file)\n"); break;
case ET_EXEC: printf("EXEC (Executable file)\n"); break;
case ET_DYN: printf("DYN (Shared object file)\n"); break;
case ET_CORE: printf("CORE (Core file)\n"); break;
default: printf("<unknown: %x>\n", header.e_type);
}

printf("  Entry point address:               %#lx\n", (unsigned long)header.e_entry);

if (close(fd) == -1)
print_error("Error: Can't close file descriptor");

return (0);
}
