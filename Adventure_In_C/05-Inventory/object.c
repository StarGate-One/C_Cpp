/*
 * Created:		2022-01-17
 * Filename:	object.c
 * Author:		StarGate-One
 * Project:		How to program a text adventure in C
 * Lesson:		05-Inventory
 */


#include <stdio.h>
#include "object.h"

OBJECT objs[] =
{
	{"an open field", "field", NULL},
	{"a little cave", "cave", NULL},
	{"a silver coin", "silver", field},
	{"a gold coin", "gold", cave},
	{"a burly guard", "guard", field},
	{"yourself", "yourself", field}
};