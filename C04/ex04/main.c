/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:52:42 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/27 17:12:56 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_putnbr_base(int nbr, char *base);

int main () {

   int val = 10;
   char *str= "01";
   
	 //          val = 10  base = "abcc"
  	ft_putnbr_base(val,str);
   return(0);

}
