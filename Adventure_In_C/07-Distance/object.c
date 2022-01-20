/*
 * Created:		2022-01-19
 * Filename:	object.c
 * Author:		StarGate-One
 * Project:		How to program a text adventure in C
 * Lesson:		07-Distance
 */


#include <stdio.h>
#include "object.h"

OBJECT objs[] =
{
	{"an open field", "field", NULL, NULL},
	{"a little cave", "cave", NULL, NULL},
	{"a silver coin", "silver", field, NULL},
	{"a gold coin", "gold", cave, NULL},
	{"a burly guard", "guard", field, NULL},
	{"yourself", "yourself", field, NULL},
	{"a cave entrance", "entrance", field, cave},
	{"an exit", "exit", cave, field}
};