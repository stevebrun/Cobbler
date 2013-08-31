#ifndef LIST_H
#define LIST_H

#include "primatives.h"

define_primative_begin(node, primative)
	struct node *next;
	struct node *prev;
	struct primative *value;
define_primative_end(node)

extern node *node_initialize(node *, node *prev, primative *value, node *next);

define_primative_begin(list, node)
	size_t length;
define_primative_end(list)

extern primative *list_head(list *l);
extern primative *list_tail(list *l);

extern list *list_push (list *l, primative *p);
extern list *list_rpush(list *l, primative *p);

extern primative *list_peek (list *l);
extern primative *list_rpeek(list *l);

extern list *list_pop (list *l, primative *output p);
extern list *list_rpop(list *l, primative *output p);

#define VALUE(it) (((node *)it)->value)
#define LIST_FOREACH(it, l) for(node *it = ((node *)l)->next; ((node *)l)->value != &PrimativeNull; it = it->next)

#endif