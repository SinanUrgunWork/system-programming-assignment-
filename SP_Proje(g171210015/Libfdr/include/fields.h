#ifndef _FIELDS_ 
#define _FIELDS_ 

#include <stdio.h>
#define MAXLEN 1001
#define MAXFIELDS 1000

typedef struct inputstruct {
  const char *name;         /* dosya adı */
  FILE *f;                  /* dosya tanımı */
  int line;                 /* sıra sayısı */
  char text1[MAXLEN];       /* sıra */
  char text2[MAXLEN];       /* Çalışma - alanları içerir  */
  int NF;                   /* Alan sayısı  */
  char *fields[MAXFIELDS];  /* Alanlara işaretçiler  */
  int file;                 /* Dosya için 1, pop için 0  */
} *IS;

extern IS new_inputstruct(const char *filename);       
extern IS pipe_inputstruct(const char *shell_command); 
extern int get_line(IS inputstruct);                   
extern void jettison_inputstruct(IS inputstruct);    
#endif
