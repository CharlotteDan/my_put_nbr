/*
** EPITECH PROJECT, 2017
** my_putnbr
** File description:
** cpool
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_put_nbr(int nb)
{
	int i;
	int n;

	n = nb;
	i = 1;
	if (n < 0) {
		my_putchar('-');
		my_put_nbr(nb * -1);
		return (0);
	}
	while (n > 9){
		n = n/10;
		i = i * 10;
	}
	while (i >= 1){
		my_putchar(((nb / i) % 10) + '0');
		i = i/10;
	}
	return (0);
}
