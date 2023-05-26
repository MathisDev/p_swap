/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <mamottet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 09:56:42 by mamottet          #+#    #+#             */
/*   Updated: 2023/05/23 11:23:01 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "lib/lib.h"
# include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        print_str("Error");
        return (0);
    }
    printf("%d\n",argc);
    print_str(argv[0]);
    print_str(argv[1]);
}