/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 12:32:49 by akhalidy          #+#    #+#             */
/*   Updated: 2021/02/04 16:20:32 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include "libasm.h"

void	test_strcmp(void)
{
	printf("\033[0;32mft_strcmp TEST\033[0m\n");
	char *s1 = ""; char *s2 = "";
	printf("strcmp : %d\n", strcmp(s1, s2));
	printf("ft_strcmp : %d\n", ft_strcmp(s1, s2));
	printf("strcmp : %d\n", strcmp("", ""));
	printf("ft_strcmp : %d\n", ft_strcmp("", ""));
	printf("strcmp : %d\n", strcmp("123", "123"));
	printf("ft_strcmp : %d\n", ft_strcmp("123", "123"));
	printf("------------------------\n");
	char *m = "testt" ; char *m1 = "test";

	printf("ft_strcmp : %d\n", ft_strcmp(m, m1));
	printf("strcmp : %d\n", strcmp(m, m1));
	m = "TestT"; m1 = "test";
	printf("ft_strcmp : %d\n", ft_strcmp(m, m1));
	printf("strcmp : %d\n", strcmp(m, m1));
	m = "Te\0stT"; m1 = "test";
	printf("ft_strcmp : %d\n", ft_strcmp(m, m1));
	printf("strcmp : %d\n", strcmp(m, m1));
	m = "\200"; m1 = "\0";
	printf("ft_strcmp : %d\n", ft_strcmp(m, m1));
	printf("strcmp : %d\n\n", strcmp(m, m1));
}

 void	test_write(void)
{
	printf("\033[0;32mft_write TEST\033[0m\n");
	int fd = open("file.txt", O_RDWR | O_CREAT);
	write(1, "write : hello\n", 14);
	ft_write(1, "ft_write : hello\n\n", 18);
	write(0, "write : hello\n", 14);
	ft_write(0, "ft_write : hello\n\n", 18);
	write(fd, "write : hello\n", 14);
	ft_write(fd, "ft_write : hello\n\n", 18);
	if ((write(-4, "buf", 6) == -1))
		printf("write error : \033[1;31mERROR: %s\033[0m\n", strerror(errno));
	if ((ft_write(-4, "buf", 6) == -1))
		printf("ft_write error : \033[1;31mERROR: %s\033[0m\n\n", strerror(errno));
	if ((write(0, NULL, 6) == -1))
		printf("write error : \033[1;31mERROR: %s\033[0m\n", strerror(errno));
	if ((ft_write(0, NULL, 6) == -1))
		printf("ft_write error : \033[1;31mERROR: %s\033[0m\n\n", strerror(errno));
}

void	test_copy(void)
{
	char dst1[1000];
	char dst2[1000];
	printf("\033[0;31mMandatory TEST\033[0m\n");
	printf("\033[0;32mft_strcpy TEST\033[0m\n");
	printf("strcpy    : |%s| , |%s| \n", strcpy(dst1, ""),dst1);
	printf("ft_strcpy : |%s| , |%s| \n\n", ft_strcpy(dst2, ""),dst2);
	printf("strcpy    : |%s| , |%s| \n", strcpy(dst1, "Lorem Ipsum is simply"),dst1);
	printf("ft_strcpy : |%s| , |%s| \n\n", ft_strcpy(dst2, "Lorem Ipsum is simply"),dst2);
	
}

void	test_read(void)
{
	printf("\033[0;32mft_read TEST\033[0m\n");
	char buf[20];
	bzero(buf, 20);
	char buf2[20];
	bzero(buf2, 20);
	printf("read : %zd \n", read(0, buf, 20));
	printf("ft_read : %zd \n\n", ft_read(0, buf2, 20));
	if ((read(-4, buf, 6) == -1))
		printf("read error : \033[1;31mERROR: %s\033[0m\n", strerror(errno));
	if ((ft_read(-4, buf2, 6) == -1))
		printf("ft_read error : \033[1;31mERROR: %s\033[0m\n", strerror(errno));
}

void	test_dup(void)
{
	printf("\033[0;32mft_strdup TEST\033[0m\n\n");
	char *sdup = "There are many variations of passages of Lorem Ipsum available";
	printf("strdup    : |%s| \n", strdup(sdup));
	printf("ft_strdup : |%s| \n\n", ft_strdup(sdup));
	printf("strdup    : |%s| \n", strdup(""));
	printf("ft_strdup : |%s| \n\n", ft_strdup(""));
	printf("strdup    : |%s| \n", strdup("Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum."));
	printf("ft_strdup : |%s| \n\n", ft_strdup("Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum."));
}

void	test_len(void)
{
	printf("\033[0;32mft_strlen TEST\033[0m\n");
	printf("ft_strlen : %lu\n", ft_strlen("libsam"));
	printf("strlen : %lu\n\n", strlen("libasm"));
	printf("ft_strlen : %lu\n", ft_strlen(""));
	printf("strlen : %lu\n\n", strlen(""));
	printf("strlen : %lu\n", ft_strlen("hi world"));
	printf("strlen : %lu\n\n", strlen("hi world"));
}

int     main()
{
	test_copy();
	printf("------------------\n");
	test_write();
	printf("------------------\n");
	test_read();
	printf("------------------\n");
	test_dup();
	printf("------------------\n");
	test_len();
	printf("----------------\n");
	test_copy();
	printf("----------------\n");
	test_strcmp();
	return 0;
}
