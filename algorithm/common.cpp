#include "stdio.h"

void format_nbit_num(int n, char* p, int size) {
	if (n < 0 || p == NULL || size < 2) {
		printf("invalid args n:%d p:%p size:%d \r\n", n, p, size);
		return;
	}

	*(p+size-1) = '\0';
	
	int i = size - 2;

	while (i >= 0) {
		p[i] = n == 0 ? n % 10 + '0' : ' ';
		n = n / 10;
		i--;
	}
}