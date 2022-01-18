/*
 * Created:		2022-01-17
 * Filename:	misc.h
 * Author:		StarGate - One
 * Project:		How to program a text adventure in C
 * Lesson:		06-Passages
*/
#ifndef _MISC_H_
#define _MISC_H_

extern OBJECT* getPassage(OBJECT* from, OBJECT* to);
extern OBJECT* actorHere(void);
extern int listObjectsAtLocation(OBJECT* location);

#endif /* End _MISC_H_*/
