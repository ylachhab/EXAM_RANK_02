/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 02:33:52 by ylachhab          #+#    #+#             */
/*   Updated: 2023/02/28 03:05:04 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;

void flood(char **data, t_point size, int x, int y, char fil)
{
	if (y < 0 || x < 0 || y > size.y
	|| x > size.x || data[y][x] != fil)
		return ;
	data[y][x] = 'G';
	flood(data, size, x - 1, y, fil);
	flood(data, size, x + 1, y, fil);
	flood(data, size, x, y - 1, fil);
	flood(data, size, x, y + 1, fil);
}

void flood_fill(char **area, t_point size, t_point begin)
{
	flood(area, size, begin.x, begin.y, area[begin.y][begin.x]);
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
