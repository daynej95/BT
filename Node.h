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

	Node operator=(Node rhs){
		swap(*this, rhs);
		return *this;
	}


protected:

	T val;
	Node* parent, Lchild, Rchild;

	//swap function
	void swap(Node& lhs, Node& rhs){

		std::swap(lhs.val, rhs.val);
	}


};






#endif