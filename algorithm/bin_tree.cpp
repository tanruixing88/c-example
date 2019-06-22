#include "common.h"

void insertNodeToBinTree(struct BTNode_t** root, struct BTNode_t* n) {
	if (n == NULL) {
		return;
	}

	if (*root == NULL) {
		*root = n;
		return;
	}

	struct BTNode_t* p = *root;


	while (p != NULL) {
		
		if (p->v > n->v) {
			if (p->l == NULL) {
				p->l = n;
				return;
			} else {
				p = p->l;
			}
		} else if (p->v < n->v) {
			if (p->r == NULL) {
				p->r = n;
				return;
			} else {
				p = p->r;
			}
		} else {
		    //this case value can not equal
		}
	}

	
}

void levelSetSibPrintBinTree(struct BTNode_t* root) {
	if (root == NULL) {
		return;
	}

	struct BTNode_t* p = root;
	struct BTNode_t* f = p;
	struct BTNode_t* t = p;

	int level = 1;
	while (f != NULL && t != NULL) {
		struct BTNode_t* nf = NULL;
		struct BTNode_t* nt = NULL;

		while (f != NULL) {
			printf(" %3d", f->v);
			if (f->l != NULL) {
				if (nf == NULL) {
					nf = f->l;
					nt = nf;
				} else {
					nt->s = f->l;
					nt = nt->s;
				}
			} else {
				printf(" NUL");
			}

			if (f->r != NULL) {
				if (nf == NULL) {
					nf = f->r;
					nt = nf;
				} else {
					nt->s = f->r;
					nt = nt->s;
				}
			} else {
				printf(" NUL");
			}
			
			f = f->s;
		}

		printf(" \r\n");

		f = nf;
		t = nt;
	}
}