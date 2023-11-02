#ifndef ELF_HEADER_H
#define ELF_HEADER_H

#define EI_NIDENT 16

struct ElfHeader
{
    unsigned char e_ident[EI_NIDENT];
    unsigned short e_type;
    unsigned short e_machine;
    unsigned int e_version;
    unsigned long e_entry;
    unsigned long e_phoff;
    unsigned long e_shoff;
    unsigned int e_flags;
    unsigned short e_ehsize;
    unsigned short e_phentsize;
    unsigned short e_phnum;
    unsigned short e_shentsize;
    unsigned short e_shnum;
    unsigned short e_shstrndx;
};

#endif

