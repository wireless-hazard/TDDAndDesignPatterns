#include <stdio.h>
#include "macslist.h"

int main(){
	maclist *list,*list2;
	uint8_t mac1[] = {0,1,0,1,5,3};
	list = ListCreate();
	SetMacAttr(list,mac1);
	SetNext(list,list2);
	for(int i = 0; i<=5;i++){
		printf("%d\n",list->mac[i]);
	}
}
