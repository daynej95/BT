#include "Node.h"

template <typename T, typename CMP = std::less()>

Node<T, CMP>::Node(){

		val = T();
		parent = nullptr;
		LChild = nullptr;
		Rchild = nullptr;
}