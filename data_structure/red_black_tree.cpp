#include "red_black_tree.h"

template <typename TData>
RedBlackTree::RedBlackTree(){
}

template <typename TData>
RedBlackTree::~RedBlackTree() {

}

template <typename TData>
int32_t RedBlackTree::Insert(uint32_t key, TData& data){

}

template <typename TData>
int32_t RedBlackTree::Update(uint32_t key, TData& data){
	
}


template <typename TData>
TData RedBlackTree::Find(uint32_t key){
	
}

template <typename TData>
TData RedBlackTree::Remove(uint32_t key){
	
}

template <typename TData>
void RedBlackTree::RotateLeft(std::shared_ptr<Node>& x){
	std::shared_ptr<Node> y = x->right;
	x->right = y->left;
	if(y->left.get() != nullptr) {
		y->left->parent = x;
	}

	y->parent = x->parent;

	if(x->parent.get() == nullptr){
		root_ = y;
	} else if(x.get() == x->parent->left.get()){
		x->parent->left = y;
	} else {
		x->parent->right = y;
	}
	y->left = x;
	x->parent = y;
}

template <typename TData>
void RedBlackTree::RotateRight(std::shared_ptr<Node>& x){
	std::shared_ptr<Node> y = x->left;

	x->left = y->right;

}