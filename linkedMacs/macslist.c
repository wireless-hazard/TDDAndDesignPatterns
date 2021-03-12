#include "macslist.h"

maclist *ListCreate(void){
	maclist *me;
	me = (maclist *)malloc(sizeof(maclist));
	me->next = NULL;
	return me;
}

void SetMacAttr(maclist *me, uint8_t mac[]){
	memcpy(me,mac,6*sizeof(uint8_t));
}

void SetNext(maclist *me, maclist *next){
	memcpy(me,next,sizeof(maclist));
}

uint8_t somateste(uint8_t a, uint8_t b){
	return (uint8_t)(a + b);
}