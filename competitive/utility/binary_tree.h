/*
 * binary_tree.h
 *
 *  Created on: May 12, 2017
 *      Author: tanpt
 */

#ifndef UTILITY_BINARY_TREE_H_
#define UTILITY_BINARY_TREE_H_

#include <stdio.h>
#include <stdarg.h>
#define DEBUG 1

int printDebug(const char *format , ... ) {
#if DEBUG
	va_list arglist;
	va_start(arglist, format);
	vprintf(format, arglist);
	va_end(arglist);
#endif
	return 0;
}

namespace bintech {
namespace utility {

typedef struct Node {
	int val;
	Node * left;
	Node * right;
	int ht;
};
typedef void (*TraverseCB) (Node * node);

void defaultTraverseCB(Node * node);

void traversePreOrder(Node * root, TraverseCB * func){
	TraverseCB * funcCB;
	if(func == NULL){

	}
}

void traversePostOrder(Node * root, TraverseCB * func){

}

void traverseInOrder(Node * root, TraverseCB * func){

}

}
}
#endif /* UTILITY_BINARY_TREE_H_ */
