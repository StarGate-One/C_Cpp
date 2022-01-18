/*
 * Created:		2022-01-17
 * Filename:	inventory.h
 * Author:		StarGate - One
 * Project:		How to program a text adventure in C
 * Lesson:		05-Inventory
*/
#ifndef _INVENTORY_H_
#define _INVENTORY_H_

extern void executeGet(const char* noun);
extern void executeDrop(const char* noun);
extern void executeAsk(const char* noun);
extern void executeGive(const char* noun);
extern void executeInventory(void);

#endif /* End _INVENTORY_H_*/
