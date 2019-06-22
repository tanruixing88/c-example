#include "stdio.h"

/* annotation:
   l: low index of an array. init is 0 or 1
   h: high index of an array. init is n-1
*/

//common function
void format_nbit_num(int n, char* p, int size);



#define BIN_SEARCH_CONDITION 0
int bin_search(int* a, int n, int e);

#define QUICK_SORT_CONDITION 0
void quick_sort(int* a, int n);

#define BIN_TREE_CONDITION 1
struct BTNode_t {
	struct BTNode_t* l;  //left child
	struct BTNode_t* r;  //right child
	struct BTNode_t* s;  //sibling node
	int v;
};

void insertNodeToBinTree(struct BTNode_t** root, struct BTNode_t* n);
void levelSetSibPrintBinTree(struct BTNode_t* root);