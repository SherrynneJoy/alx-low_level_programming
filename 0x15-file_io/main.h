#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
void openFile(const char *from_file, const char *to_file);
void copyFile(int fd1, int fd2, const char *f1, const char *f2, char *buffer);
#endif
