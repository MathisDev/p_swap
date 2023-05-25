/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <mamottet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:13:58 by mamottet          #+#    #+#             */
/*   Updated: 2023/05/23 16:36:12 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "lib.h"

/* ---------- SWAP ---------- */ 

void	sa(char	*li)
{
	size_t	len;
	char	tmp;

	len = ft_strlen(li);
	if (len >= 1)
	{
		tmp = li[0];
		li[0] = li[1];
		li[1] = tmp; 
	}
}

void	sb(char	*li)
{
	size_t	len;
	char	tmp;

	len = ft_strlen(li);
	if (len > 1)
	{
		tmp = li[0];
		li[0] = li[1];
		li[1] = tmp; 
	}
}
/* --- ALL SWAP --- */ 

void	ss(char *l1,char *l2)
{
	sa(l1);
	sb(l2);
}

/* ---------- PUSH ---------- */ 

void	pa(char *l1,char *l2)
{
	size_t len;
	
	len = ft_strlen(l1);
	if (len >= 1)
	{
		add(l1[0],l2);	
	}
}

void	pb(char *l1,char *l2)
{
	size_t len;
	
	len = ft_strlen(l2);
	if (len >= 1)
	{
		add(l2[0],l1);		
	}
}

/* ---------- ROTATE ---------- */ 

void	ra(char *l1)
{
	int len;
	int i;
	char tmp;
	
	len = 0;
	i = 0;
	len = ft_strlen(l1);
	if (len >= 1)
	{
		tmp = l1[0];
		while(l1[i] != '\0')
		{
			l1[i] = l1[i + 1]; 
		}
		l1[i] = tmp;
	}
}

void	rb(char *l1)
{
	size_t len;
	
	len = ft_strlen(l1);
	if (len >= 1)
	{
		/* rotate */		
	}
}

/* --- ALL ROTATE --- */ 

void	rr(char *l1,char *l2)
{
	ra(l1);
	rb(l2);
}

/* ---------- REV & ROT ---------- */ 

void	rra(char *l1)
{
	size_t len;
	
	len = ft_strlen(l1);
	if (len >= 1)
	{
		
	}
}

void	rrb(char *l1)
{
	size_t len;
	
	len = ft_strlen(l1);
	if (len >= 1)
	{
		
	}
}

/* --- ALL REV & ROTATE --- */ 

void	rrr(char *l1,char *l2)
{
	rra(l1);
	rrb(l2);
}
