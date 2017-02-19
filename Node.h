/////////////////////
// Node class. Each node has a parent and two children. Will be used to implement binary tree.
//
//
//
//////////////////////

#include <functional>


#ifndef _BINARYTREE_H_
#define _BINARYTREE_H_

template<typename T, typename CMP = std::less()>

class Node {

public:

	Node(); //default constructor




protected:

	T val;
	Node* parent, Lchild, Rchild;


};






#endif