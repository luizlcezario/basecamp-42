/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:39:57 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/28 19:11:33 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
void	ft_strcat(char *dest, char *src);
unsigned int	size_all(int size, char **strs, char *sep);
int	ft_strlen(char *str);

int		main(void)
{
	int		offset;
	char	**strs;
	char	*res_str;

	strs = malloc(4 * sizeof(char *));
	if (strs == NULL)
		return (1);
	offset = 0;
	while (offset < 4)
	{
		strs[offset] = "abc";
		offset++;
	}
	res_str = ft_strjoin(4, strs, ", ");
	printf("res: %s\n", res_str);
	if (res_str == NULL)
		return (1);
	printf("res: %s\n", res_str);
	free(strs);
	free(res_str);
	return (0);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *tmp;
	int a; 
	
	tmp = NULL;
	tmp = malloc(size_all(size, strs, sep));
	if(tmp == NULL)
		return (NULL);
	a = 0;
	while(strs[a] != 0 && a < size)
	{
		ft_strcat(tmp, strs[a]);
		if(strs[a + 1] != 0  && a  < size)
			ft_strcat(tmp, sep);
		a++;
	}
	return(tmp);
}
unsigned int	size_all(int size, char **strs, char *sep)
{
	int a;
	unsigned int sizeall; 
	
	a = 0;
	sizeall = 0;
	if(size < 1)
		return (1);
	while(strs[a] != 0 && a < size)
	{
		sizeall += ft_strlen(strs[a]);
		a++;
		if(strs[a + 1] != 0  && a  < size)
			sizeall += ft_strlen(sep);
	}
	return (sizeall);
}


int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != 0)
	{
		a++;
	}
	return(a);
}

void	ft_strcat(char *dest, char *src)
{
	int a;
	int i;

	a = 0;
	while (dest[a] != 0)
	{
		a++;
	}
	i = 0;
	while (src[i] != 0)
	{
		dest[a] = src[i];
		a++;
		i++;
	}
	dest[a] = 0;
}
