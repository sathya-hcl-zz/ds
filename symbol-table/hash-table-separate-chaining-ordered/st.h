#ifndef ST_H
#define ST_H 1

#include "item.h"

void STinit(int);
int  STcount(void);
void STinsert(Item);
Item STsearch(Key);
void STdelete(Item);

#endif
