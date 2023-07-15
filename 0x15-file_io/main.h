#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif