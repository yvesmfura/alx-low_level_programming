#ifndef _HASH_TABLES_H_
#define _HASH_TABLES_H_


#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/* Define your struct for sorted hash node */
typedef struct shash_node {
    char *key;
    char *value;
    struct shash_node *next;
    struct shash_node *sprev;
    struct shash_node *snext;
} shash_node_t;

/* Define your struct for sorted hash table */
typedef struct shash_table {
    unsigned long int size;
    shash_node_t **array;
    struct shash_node *shead;
    struct shash_node *stail;
} shash_table_t;

/* Function prototypes */
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
#endif
