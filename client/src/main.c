#include <stdio.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>
#define MAX_READ 20

int main()
{
    char buffer[MAX_READ + 1];
    int numBytes, fd;
    ssize_t numRead;
    printf("Hello world\n");
    numRead = read(STDIN_FILENO, buffer, MAX_READ);
    if (numRead == -1)
      return -1;
    buffer[numRead] = '\0';
    printf("The input data was: %s\n",buffer);
    fd = open("test.txt", O_RDWR | O_CREAT, S_IRUSR|S_IWUSR);
    if (fd == -1)
      return -1;
    numBytes = write(fd, buffer, numRead);
    close(fd);
    return 0;
}

