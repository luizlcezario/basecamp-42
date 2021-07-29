/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:52:47 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/28 23:34:06 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int ft_atoi(char *str);
int main () {
   int val;
   char str[20];
   
 	 strcpy(str, "    ---++--1234ab567");	
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

		val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   return(0);

}
