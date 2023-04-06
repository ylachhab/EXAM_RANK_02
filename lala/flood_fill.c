/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 11:31:04 by ylachhab          #+#    #+#             */
/*   Updated: 2023/04/05 11:54:47 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;

void	fill(char **area, t_point *size, int x, int y, char c)
{
	if (x < 0 || y < 0 || x >= size->x || y >= size->y || area[y][x] != c)
		return ;
	area[y][x] = 'G';
	fill(area, size, x + 1, y, c);
	fill(area, size, x - 1, y, c);
	fill(area, size, x, y + 1, c);
	fill(area, size, x, y - 1, c);
}

void flood_fill(char **area, t_point size, t_point begin)
{
	fill(area, &size, begin.x, begin.y, area[begin.y][begin.x]);
}

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}