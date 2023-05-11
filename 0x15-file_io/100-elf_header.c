#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *ident);
void print_magic(unsigned char *ident);
void print_class(unsigned char *ident);
void print_data(unsigned char *ident);
void print_version(unsigned char *ident);
void print_abi(unsigned char *ident);
void print_osabi(unsigned char *ident);
void print_type(unsigned int type, unsigned char *ident);
void print_entry(unsigned long int entry, unsigned char *ident);
void close_file(int file);

/**

check_elf - Checks if a file is an ELF file.

@ident: A pointer to an array containing the ELF magic numbers.

Description: If the file is not an ELF file - exit code 98.
*/
void check_elf(unsigned char *ident)
{
int index;

for (index = 0; index < 4; index++)
{
if (ident[index] != 127 &&
ident[index] != 'E' &&
ident[index] != 'L' &&
ident[index] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}

/**

print_magic - Prints the magic numbers of an ELF header.

@ident: A pointer to an array containing the ELF magic numbers.

Description: Magic numbers are separated by spaces.
*/
void print_magic(unsigned char *ident)
{
int index;

printf(" Magic: ");

for (index = 0; index < EI_NIDENT; index++)
{
 if (index == EI_NIDENT - 1)
 	printf("\n");
 else
 	printf(" ");
printf("%02x", ident[index])

)

}
}

/**

print_class - Prints the class of an ELF header.

@ident: A pointer to an array containing the ELF class.
*/
void print_class(unsigned char *ident)
{
printf(" Class: ");

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

print_data - Prints the data of an ELF header.

@ident: A pointer to an array containing the ELF class.
*/
void print_data(unsigned char *ident)
{
printf(" Data: ");

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

print_version - Prints the version of an ELF header.

@ident: A pointer to an array containing the ELF version.
*/
void print_version(unsigned char *ident)
{
printf(" Version: %d",
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

print_osabi - Prints the OS/ABI of an ELF header.
@ident: A pointer to an array containing the ELF version.
*/
void print_osabi(unsigned char *ident)
{
printf




