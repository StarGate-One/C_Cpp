/*
 * Created:		2022-01-22
 * Filename:	noun.h
 * Author:		StarGate - One
 * Project:		How to program a text adventure in C
 * Lesson:		08-North-South-East-West
*/
#ifndef _NOUN_H_
#define _NOUN_H_

extern OBJECT* getVisible(const char* intention, const char* noun);
extern OBJECT* getPossession(OBJECT* from, const char* verb, const char* noun);

#endif /* End _NOUN_H_*/
