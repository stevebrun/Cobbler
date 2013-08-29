#ifndef NUMBER_H
#define NUMBER_H

#include "primatives.h"
#include "value.h"

define_primative_begin(number, NumberPrimative, value)
define_primative_end(number)

number *number_initWithInteger        (number *num, int64_t  integer);
number *number_initWithUnsignedInteger(number *num, uint64_t integer);
number *number_initWithFloating       (number *num, double   floating);
number *number_initWithCharacter      (number *num, char     character);
number *number_initWithBoolean        (number *num, bool     boolean);

int64_t  number_integer        (number *num);
uint64_t number_unsignedInteger(number *num);
double   number_floating       (number *num);
char     number_character      (number *num);
bool     number_boolean        (number *num);

#endif