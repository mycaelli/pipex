/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 20:15:58 by mcerquei          #+#    #+#             */
/*   Updated: 2022/09/19 04:46:17 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>


int		ft_printf(const char *str_format, ...);

int		ft_printf_str(char *s);

int		ft_printf_char(char c);

int		ft_printf_signed_int(int n);

char	*ft_itoa(int n);

size_t	ft_strlen(const char *s);


#endif
