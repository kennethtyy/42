/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:58:17 by kentan            #+#    #+#             */
/*   Updated: 2023/09/24 12:58:17 by kentan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int main()
{
	//ft_atoi
	char str[] = "12314sada2141";
	printf("%d\n",ft_atoi(str));
	
	//ft_bzero
	char str[] = "heloooooolfsf";
	ft_bzero(&string[4],5);
	printf("%s\n", string);
	
	//ft_calloc
	char *ptr;
	int i;

	i = 0;
	ptr = (char*) ft_calloc(30,1);
	if (!ptr)
		printf("failed");
	while(i < 20)
	{
		printf("%d\n",ptr[i]);
		i++;
	}
	
	//ft_isalnum
	printf("%d\n",ft_isalnum('a'));
	
	//ft_isalpha
	printf("%d",ft_isalpha('a'));
	
	//ft_isascii
	printf("%d",ft_isascii('a'));
	
	//ft_isdigit
	printf("%d\n",ft_isdigit('8'));
	
	//ft_isdigit
	printf("%d\n",ft_isprint('a'));
	
	//ft_memchr
	char str[] = "hello testing 123";
	printf("%s\n",(char*)ft_memchr(str,'g',15));
	
	//ft_memcpy
	char dest[] = "meow this is a cat";
	char src[] = "kang kang kang";
	ft_memcpy(&dest[3],src,6);
	printf("%s\n",dest);
	
	//ft_memmove
	char dest[] = "testing 123";
	char src[] = "hello";
	int n = 5;
	ft_memmove(dest,src,n);
	printf("%s\n", dest);
	
	//ft_memset
	char string[] = "this is a string for testing...";
	ft_memset(&string[3],'f',6);
	printf("%s\n",string);
	
	//ft_strchr
	char str[] = "testing 123 abc";
	char c = 'n';
	printf("%c\n",*ft_strchr(str,c));
	
	//ft_strlcat
	char dest[] = "this is ";
	char src[] = "a string";
	printf("%zu\n",ft_strlcat(dest,src,30));
	printf("%s\n", dest);
	
	//ft_strlcpy
	char dest[] = "hellooooo";
	char src[] = "meow";
	printf("%zu\n",ft_strlcpy(dest,src, 5));
	printf("%s\n", dest);
	
	//ft_strlen
	printf("%zu\n",ft_strlen("hello world"));
	
	//ft_strncmp
	char str1[] = "hello testing 2";
	char str2[] = "hello testing 2";
	printf("%d\n",ft_strncmp(str1,str2,100));

	//ft_strnstr
	char str1[] = "hello this is a test";
	char str2[] = "is";
	printf("%s\n",ft_strnstr(str1,str2,50)); 

	//ft_strrchr
	char str[] = "testing 123 abc";
	char c = 'k';
	printf("%c\n",*ft_strrchr(str,c));
	
	//ft_tolower
	char c = 'D';
	printf("%c\n",ft_tolower(c));
	
	//ft_toupper
	char c = 'd';
	printf("%c\n",ft_toupper(c));

	//ft_strdup
	char s[] = "testing 123";
	printf("%s\n",ft_strdup(s));
}
