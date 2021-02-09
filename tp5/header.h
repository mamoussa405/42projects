#ifndef __HEADER__H
# define __HEADER__H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct  Etudiant
{
   int      InscriptionNumber;
   char     FirstName[100];
   char     LastName[100];
   float    Marks[3];
}               Etudiant;

typedef struct  Groupe
{
    Etudiant Students[100];
}               Groupe;

void        ReadStudent(Etudiant*);
void        ReadGroup(Groupe*, int);
void        DisplayStudent(Etudiant*);
void        DisplayGroup(Groupe*, int);
short       IsSorted(Groupe, int);
void        SortGroup(Groupe*, int);
int         SearchStudent(Groupe, int, int);
void        UpdateStudent(Groupe*, int, char*, char*);
size_t      SuperStudent(Groupe, int);
void        initializeValues(Groupe);
#endif