#include "common.h"

int main() {
#if BIN_SEARCH_CONDITION
	printf("bin_search one element:\r\n");
	printf("test case1:\r\n");
	int a1[10] = {1, 3, 7, 9, 10, 23, 45, 55, 67, 71};
	int index1 = bin_search(a1, 10, 71);
	printf("return index:%d\r\n", index1);
	printf("test case2:\r\n");
	int a2[2] = {7, 8};
	int index2 = bin_search(a2, 2, 9);
	printf("return index:%d\r\n", index2);

    printf("bin_search one element:\r\n");
#endif
#if QUICK_SORT_CONDITION
	printf("quick_sort one element:\r\n");
	printf("test case1:\r\n");
    int a1[10] = {31, 3, 7, 9, 10, 23, 45, 55, 67, 71};
    quick_sort(a1, 10);
	printf("quick sort array:");
	for (int i = 0; i < 10; i++) {
		printf(" %d", a1[i]);
	}
	printf("\r\n");
#endif

	struct BTNode_t node_list[5] = {
		{NULL, NULL, NULL, 8},
		{NULL, NULL, NULL, 5},
		{NULL, NULL, NULL, 1},
		{NULL, NULL, NULL, 2},
		{NULL, NULL, NULL, 10},
	};

	BTNode_t* root = NULL;
	for (int i = 0; i < 5; i++) {
		insertNodeToBinTree(&root, node_list + i);
	}

	levelSetSibPrintBinTree(root);



	getchar();
	return 0;
}