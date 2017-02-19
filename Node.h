#include <functional>

#ifndef _BINARYTREE_H_
#define _BINARYTREE_H_

template<typename T, typename CMP = std::less()>

class Node {

public:

	Node();

protected:

	T val;
	Node* parent, Lchild, Rchild;


};






#endif