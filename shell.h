#ifndef SHELL_H
#define SHELL_H

/* Standard libraries header */
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

/* Declaration of used functions */
void run_cmd(char **tokns);
void execute_cmd(char *full_cmd, char **tokns);
char *get_cmd_path(char *first_cmd);
int builtin_cmd(char **tokens);
char **tokenizd_inpt(char *inpt);
void free_mem(char **tokns);
char *rid_inpt(void);
void _perror(char **tokns);
char *_getenv(char *path_key);
int _putchar(char c);
int _print_s(char *s);
void prompt(void);
unsigned int atchn(char cee, const char *c);
char **_strtok(char *s, char *delim);
void get_env(void);
int _strncmp(const char *s1, const char *s2, size_t num);
int _atoi(const char *s);
void run_cd(char **tokns);
size_t _strlen(const char *stri);
void _strcate(char *destn, char *srce);
int _strcmp(char *file1, char *file2);
char *_strcpy(char *de, const char *sor);
char *_strdup(const char *strng);

/* Declaration of variables */
extern char **environ;

#endif /*SHELL_H*/
