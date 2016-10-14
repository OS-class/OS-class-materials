#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(){

	char buffer[200];
	memset(buffer, 'a', 200); // man memset
	int fd = open("test.txt", O_CREAT|O_RDWR); // man 2 open
	write(fd, buffer, 200); // man 2 write
	lseek(fd, 0, SEEK_SET); // man lseek
	read(fd, buffer, 100); // man 2 read
	lseek(fd, 500, SEEK_CUR);
	write(fd, buffer, 100);

}
