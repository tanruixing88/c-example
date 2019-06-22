#include "common.h"

void quick_sort(int* a, int n) {
	if (a == NULL || n <= 1) {
	    return;
	}

	int f = *a; //sentinel flag
	int l = 1;
	int h = n -1;

	while (l <= h) {
		if (*(a+l) <= f) {
			l++;
			continue;
		}

		if (*(a+h) >= f) {
			h--;
			continue;
		}

		int tmp = *(a+l);
		*(a+l) = *(a+h);
		*(a+h) = tmp;
		/* l++;h++ do not exec for *(a+l) <= f and *(a+h) >= f to move index l and h*/
	}

	for (int i = 1; i < l; i++) {
		*(a+i-1) = *(a+i);
	}

	*(a+l-1) = f;
	if (l - 1 > 1) {
		quick_sort(a, l-1);
	}

	if (n - l > 2 ) {
		quick_sort(a+l, n-l);
	}
}
