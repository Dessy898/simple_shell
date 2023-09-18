#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

void env_shell(char **arrp);
int _strcmp(char *s1, char *s2);
void print_shell(char *s);
int _strlen(char *c);
void exit_shell(char *buffer);
extern char **environ;
char **div_buffer(char *buffer);
int execute(char **arrp);
void sighandler(int num);

int _putchar(char c);
char *_strcpy(char *dest, char *src);
char *search_path(char *command);
char **_split(char *str, char *sep);
char *_strcat(char *dest, char *src);
char *_getenv(char *envvar);
void *_calloc(unsigned int nmember, unsigned int size);
void _env(void);
int execute(char **args);
int empty(char *buff);


#endif
