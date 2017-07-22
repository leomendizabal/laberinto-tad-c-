#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include <stdio.h>

const int MAX=80;
typedef char *string;

void strcrear(string &s);

void strdestruir(string &s);

int strlar(string s);

void strcop(string &s1,string s2);

void scan(string &s);

void strcon(string &s1,string s2);

void strswp(string &s1,string &s2);

void print(string s);

bool strmen(string s1,string s2);

bool streq(string s1,string s2);

void strsplit(string s1, char c, string &s2);

void strfirst(string s1, int index, char c, string &s2);

void strtrim(string s1, string &s2);

int strToInt(string s);

void strToLowerCase(string &s);

char charAt(string s, int index);

void straddchar(string &s,char c);

void strreverter(string in,string &out);

bool strIsEnd(char c);

int strIndexOf(string s,char c);

bool EsAlfabetico(string parametro);

void strtrimlast(string s1, string &s2);

void SobreEscritura(string parametro,char &prim,char &ult);

void Bajar_String (string s, FILE * f);

void Levantar_String (string &s, FILE * f);

void charToString(string &s, char c);

#endif // STRING_H_INCLUDED
