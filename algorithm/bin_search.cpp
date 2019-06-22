#include "stdio.h"

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

int main() {
	printf("bin_search one element:\r\n");
	printf("test case1:\r\n");
	int a1[10] = {1, 3, 7, 9, 10, 23, 45, 55, 67, 71};
	int index1 = bin_search(a1, 10, 71);
	printf("return index:%d\r\n", index1);
	printf("test case2:\r\n");
	int a2[1] = {7};
	int index2 = bin_search(a2, 1, 7);
	printf("return index:%d\r\n", index2);
	getchar();
	return 0;
}