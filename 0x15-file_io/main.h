#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return:actual number of letters read and printed, or 0 if there was error
 */
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * create_file -create a file with a given filename, writes the given content
 * @filename: name of the file to create
 * @text_content: text content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content);

/**
 * append_text_to_file - appends the given text content to an existing file
 * @filename: name of the file to append to
 * @text_content: text content to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content);

#endif