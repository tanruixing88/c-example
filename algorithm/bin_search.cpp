#include "common.h"

int bin_search(int* a, int n, int e) {
	if (a == NULL || n <= 0) {
	    return -1;
	}

	int l = 0;
	int h = n - 1;

	while (l < h - 1) {
        int m = (l + h) / 2;
		if (*(a+m) < e) {
		    l = m;
		} else if (*(a+m) > e) {
		    h = m;
		} else {
		    return m;
		}
	}

	if (l == h && *(a+l) == e) {
	    return l;
	} else if (l == h - 1) {
		if (*(a+l) == e) {
		    return l;
		} else if (*(a+h) == e) {
		    return h;
		}
	}

	return -1;
}