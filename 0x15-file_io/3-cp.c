#include <stdio.h>
#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * _error - Read file.
 * @e: Error number
 * @filename: File name
 */
void _error(int e, char *filename)
{
	if (e == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	if (e == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
/**
 * cp - Copies the content of a file to another file.
 * @file_from: Name of the source file.
 * @file_to: Name of the destination file.
 * Return: 1 on success, -1 on failure.
 */
void cp(char *file_from, char *file_to)
{
	int fd_read, res_read, fd_write, res_write;
	char *buf[1024];

	/* READ */
	fd_read = open(file_from, O_RDONLY);
	if (fd_read < 0)
		_error(98, file_from);
	/* WRITE */
	fd_write = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_write < 0)
	{
		close(fd_read);
		_error(99, file_to);
	}
	do {
		/* READ */
		res_read = read(fd_read, buf, 1024);
		if (res_read < 0)
			_error(98, file_from);
		/* WRITE */
		res_write = write(fd_write, buf, res_read);
		if (res_write < res_read)
			_error(99, file_to);
	}	while (res_write == 1024);
	if (close(fd_read) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_read);
		close(fd_write);
		exit(100);
	}
	if (close(fd_write) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_write);
		exit(100);
	}
}
/**
 * main - Copies the content of a file to another file.
 * @ac: Argument count
 * @av: argument values
 * Return: 0 on succes, -1 on error.
 */
int main(int ac, char *av[])
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(av[1], av[2]);
	return (0);
}
