# include <fcntl.h>
# include <sys/types.h>
# include <unistd.h>
# include <sys/file.h>
#include <stdio.h>

main(){
	int fd,loc_res;
	char buf[10];
	fd = open("./file1",O_RDWR);
	read(fd,buf,6);
	loc_res=lockf(fd,F_LOCK,6); //lock 6 bytes
	printf(" result of locking = %d\n",loc_res);
	getchar();
	loc_res=lockf(fd,F_ULOCK,6); //lock 6 bytes
	printf(" result of unlocking = %d\n",loc_res);
	getchar();
}
