#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/errno.h>
#include <fcntl.h>
#include <unistd.h>

size_t	ft_strlen(char *s);
char 	*ft_strcpy(char *dst, char *src);
int		ft_strcmp(char *s1, char *s2);
ssize_t ft_write(int fd, char *s, int len);
ssize_t ft_read(int fd, char *buf, int nbyte);
char	*ft_strdup(const char *s);

int main()
{
	char *str1 = "jsfhjh";
	char *str2 = "ss";
	int fd;
	char *buf;

	buf = ft_strdup("Heey");
	printf("|%s|\n", buf);
	//printf("hey");
//	buf = (char *)malloc(20);
	//fd = open("file.txt", O_RDWR | O_CREAT, 444);
	//ft_write(fd, "Asmaa khalidy", 13);
//	printf("1- |%zd| %s \n", ft_read(fd, buf, 100), buf);
	printf("%d\n",errno);
//	printf("2 -|%zd| %s \n", ft_read(fd, buf, 20), buf);
	printf("%s\n", strerror(errno));
	//printf("|%d|\n",ft_write(15484,"hey",15));
	//printf("%d\n",errno);
	//	printf("|%d|\n", ft_strcmp(str1, str2));
//	printf("%d\n", strcmp(str1, str2));

	return(0);	
}
