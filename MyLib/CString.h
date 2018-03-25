#ifndef _C_STRING_H_
#define _C_STRING_H_

#include <stdio.h>
#include <stdlib.h>
#include "stdbool.h"
#include "string.h"
/**
  ******************************************************************************
  * @file    CString.c
  * @author  DuGu
  * @version V1.7.6
  * @date    10/12/2016
  * @brief   Some Function About String
						 The following functions on a 32-bit machine	
  ******************************************************************************
**/

#define IS_UPPER(c)	    (((c)>='A')&&((c)<='Z'))
#define IS_LOWER(c)	    (((c)>='a')&&((c)<='z'))
#define IS_DIGITNUM(c)	(((c)>='0')&&((c)<='9'))

#define StrAdd      CStringConnact
#define StrAdd3     CStringConnact3
#define ItoA        IntToString
#define FtoA        FloatToString
#define StrLenth    CStringLenth
#define StrIndexOf  CStringLetterFirstIndexOf
#define StrIndexOfs CStringSubStringIndex

#define STRING_TABLE_NUM 5 //Ҳ�Ǹ����⺯�����Ի���Ƕ�׵Ĳ���
#define STRING_WIDTH 16  	 //�ַ�������󳤶�,����'\0'

#define USE_STRING_STRUCT

#ifdef USE_STRING_STRUCT
typedef
struct
{
		char* (*Int2Str)(int); 
		char* (*Int2HexStr)(unsigned char);
		char* (*Float2Str)(float val);
		char* (*Bool2Str)(bool val);
		int (*Lenth)(char*);
		char* (*Add)(char *,char * );
		char* (*Add3)(char *,char *,char*);
		char* (*AddInt)(char *,int val);
		int (*CharCount)(const char* ,char);
		int (*IndexOf)( char *s1, char *s2);
		int (*LastIndexOf)(char *,char* );
		char* (*Insert)(char *,int index,char*);
		char* (*Remove)(char *str,int start,int end);
		char* (*Reserse)(char *);
		char* (*Replace)(char *, char * subs, char * news);
		bool (*Contain)(char *s1,char *s2);
		char* (*ToUpper)(char *); 
		char* (*ToLower)(char *); 
}CString_t;

extern CString_t Str;

#endif

void Int16ToString(char *oringin, int val);  //��
char* IntToString(int val);                   //��
char* IntToHexString(unsigned char val);   //��
void FloatToString2(char * origin , float val);//��
char * FloatToString(float val);//��
char* BoolToString(bool val);
void StringToint(char * str,int *out);//��
int StringToInt(char * str);//��
bool StringTofloat(float * out,char * str);//��
float StringToFloat(char * str);//��

int CStringLenth(char * string);//��
void CStringAlignToLeft(char * str);//��

char *CStringCatInt(char *target,int val);
char *CStringConnact(char *target,char * source);//��
char *CStringConnact3(char *target,char * source,char* three);//��
void CStringAppend(char *target,char * source);//��

int CStringLetterFirstIndexOf( char*string, char letter);//��
int CStringLetterLastIndexOf(char *string,char letter);//��
int CStringSubStringIndex( char *s1, char *s2);//��
int CStringSubStringLastIndex( char *s1, char *s2);//��

char *CStringAfterLetterFisrt(char *string, char letter);//��
char *CStringAfterLetterLast( char *string, char letter);//��

int CStringLetterCount(const char *string,char letter);//��

bool CStringContainsLetter( char *string,char letter);//��
bool CStringContainsSubString(char *s1,char *s2);//��

char * CStringRemoveAt(char *str,int index); //��
char * CStringInsert(char *str,int index,char letter);//��
char * CStringInsertRange(char *str,int index,char* letters);//��
char * CStringRemoveRange(char *str,int startindex,int endindex);//��

char * CStringSubString( char *s1, char *s2);//��

char* CStringReserse(char *string);//��
int CStringCompare(const char *s1, const char *s2);//��

char * CStringRemoveSubString(char *string, char *substring);//��
char *CStringReplaceSubString(char *source, char *old , char *news);//��

char *CStringToUpper(char *string); //��
char *CStringToLower(char *string); //��

#endif

