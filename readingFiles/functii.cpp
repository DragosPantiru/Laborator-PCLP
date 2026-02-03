#include "Header.h"

int my_atoi(const char* str) {
	int rezultat = 0;
	int i = 0;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] >= '0' && str[i] <= '9') {
		rezultat = rezultat * 10 + (str[i] - '0');
		i++;
	}
	return rezultat;
}