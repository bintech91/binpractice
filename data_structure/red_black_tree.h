#ifndef RED_BLACK_TREE_H
#define RED_BLACK_TREE_H

#include <memory>
#include <stdint.h>

template <typename TData>
class RedBlackTree {
public:
	RedBlackTree();
	virtual ~RedBlackTree();

	int32_t Insert(uint32_t key, TData& data);
	int32_t Update(uint32_t, TData& data);
	TData Find(uint32_t key);
	TData Remove(uint32_t key);
	uint32_t height();
	uint32_t size(){
		return size_;
	}

private:
	enum Color {
		BLACK = 0,
		RED = 1
	}

	typedef struct Node {
		Color color;
		std::shared_ptr<Node> parent;
		std::shared_ptr<Node> right;
		std::shared_ptr<Node> left;
		uint32_t key;
		TData data;
	} Node;

	void RotateLeft(std::shared_ptr<Node>& node);
	void RotateRight(std::shared_ptr<Node>& node);
	
	std::shared_ptr<Node> root_;
	uint32_t size_;
}
#endif RED_BLACK_TREE_H