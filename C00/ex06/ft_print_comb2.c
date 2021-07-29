/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 00:19:10 by llima-ce          #+#    #+#             */
/*   Updated: 2021/07/20 02:12:44 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_Loop(int dec1, int uni1);
void	ft_print(int	dec1, int	uni1, int	dec2, int	uni2);

void	ft_print_comb2(void)
{
	int	dec1;
	int	uni1;
	
	dec = '0';
	uni1 = '0';
	
	while (dec1 <= '9')
	{

		ft_Loop(dec1, uni1);
		uni1++;
		if (uni1 > '9')
		{
			dec1++;
			uni1 = '0';
		}
	}
}

// 00 01 
// 09 10
// 82 83

void	ft_Loop(int dec1, int uni1)
{
	int	uni2;
	int	dec2;

	uni2 = uni1 + 1;
	dec2 = dec1;
	while (dec2 <= '9')
	{
		if (uni2 <= '9')
		{
			ft_print(dec1,uni1,dec2,uni2);
			uni2++;
		}
		else
		{
			dec2++;
			uni2 = '0';
		}
	}
	return ;
}

void	ft_print(int	dec1, int	uni1, int	dec2, int	uni2)
{
	write(1, &dec1, 1);
	write(1, &uni1, 1);
	write(1, " ", 1);
	write(1, &dec2, 1);
	write(1, &uni2, 1);
	if (dec1 == '9' && uni1 == '8' && dec2 == '9' && uni2 == '9')
	{
	}
	else
	{
		write(1, ", ", 2);
	}
	return ;
}

/* 
 00 01  
 na minha funcao eu crie um uma funcao loop e alem da funcao principal
 
 na funcao print comb
 	{
		nessa funcao criei duas variaves
 	1.	dec1 = dezena do primeiro numero , uni1 = unidade do primeiro numeor 
		
	2.	ai faco um while dec1 <= 9
			
		3.	chama a funcao loop que nela mando o dec1 e uni1
			 
		4.	ai quando sair da funcao 
			adiciono um no uni1 que é a unidade 
			
		5.depois faço um if que verifica se uni1 a unidade desse numero daqui ja é < 9 
				se for eu zero o uni1 e adicono um no dec1 

		e ai vai rolando esse while ate o numero aqui dessa funcao chegar no  98
	}
	
	na funcao loop que recebe dec1 , uni1 eu faco quase a mesma coisa 
	1. crio duas varias tb dec2 , uni2 

	aqui vem o pulo do gato 
	2. uni2 = uni1 +1 | dec2 = dec1  pq tipo ja que é uma combinacao de dois numeros eles nao podem se repetir 
	logo o numero nessa funcao sempre sera maior do que a do outra

	3. depois disso eu faco um while baiscamente igual a do outra funcao dec2 <= 9
	
	aqui dentre faco um if que se uni2  uni2 >= 9 
		se for verdade ele vai printar os numeros do jeito que aparece la tipo "dec1uni1 dec2uni2, "
		e adicionar um ao uni2

	ai faco um else 
		e o dec2 aumenta um numero 
		que se nao o uni2 zera



*/