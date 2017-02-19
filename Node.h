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

	//default constructor
	Node(){

		val = T();
		parent = nullptr;
		LChild = nullptr;
		Rchild = nullptr;
	}




protected:

	T val;
	Node* parent, Lchild, Rchild;


};






#endif