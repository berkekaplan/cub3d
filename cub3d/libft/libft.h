/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaplan <@student.42kocaeli.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 09:11:01 by mkaplan           #+#    #+#             */
/*   Updated: 2024/04/25 09:11:03 by mkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

// LIBFT
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	**free_malloc(char **tab, size_t i);
int		word_count(char const *s, char c, int status);
char	**ft_split(char const *s, char c);
char	*ft_trim(char const *str, char const *set);
char	*ft_strcat(char *s1, const char *s2);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
// GET_NEXT_LINE
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif // BUFFER_SIZE

char	*get_next_line(int fd);
char	*get_next_line_bonus(int fd);

#endif // LIBFT_H
