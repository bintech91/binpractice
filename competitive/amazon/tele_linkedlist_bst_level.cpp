#include <iostream>
#include <queue>

typedef struct Node
{
	int value;
	Node * left;
	Node * right;
	Node * next;
} Node;

void CreateLListBSTLevel(Node * root){
	if(root == nullptr){
		return;
	}
	std::queue<Node *> q_same_level_node;
	std:queue<Node *> tmp_q;
	Node * prev_node;

	q_same_level_node.push(root);

	while(q_same_level_node.size()){
		Node * node = q_same_level_node.front();
		q_same_level_node.pop();

		if(prev_node != nullptr){
			prev_node->next = node;
		}

		prev_node = node;
		
		if(node->left != nullptr){
			tmp_q.push(node->left);
		}

		if(node->right != nullptr){
			tmp_q.push(node->right);
		}

		if(q_same_level_node.size() == 0){
			q_same_level_node.swap(tmp_q);
		}
	}
}

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}