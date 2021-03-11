#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#ifndef MACSLIST_H
#define MACSLIST_H

typedef struct LinkedMac maclist;

struct LinkedMac{
	uint8_t mac[6];
	maclist *next; 
};

maclist *ListCreate(void);
void SetMacAttr(maclist *me, uint8_t mac[]);
void SetNext(maclist *me, maclist *next);

#endif