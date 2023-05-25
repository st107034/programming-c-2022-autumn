#include<iostream>
#include<ostream>

struct Node
{
	int data;
	Node* left;
	Node* right;
	Node(int data, Node* left = nullptr, Node* right = nullptr) :data(data), left(left), right(right) 
	{
	}
	~Node() 
	{
	}
};

class BTree
{
private:
	Node* root;

	void Insert(Node*& root, Node* node)
	{
		if (root == nullptr)
		{
			root = node;
			return;
		}
		if (root->data > node->data)
		{
			return Insert(root->left, node);
		}
		if (root->data < node->data)
		{
			return Insert(root->right, node);
		}
		if (root->data == node->data)
		{
			return;
		}
	}

	void Print(std::ostream& stream, Node*& root, int depth = 0)
	{
		if (root == nullptr)
		{
			return;
		}
		Print(stream, root->left, depth + 1);
		for (int i = 0; i < depth; ++i)
		{
			std::cout << "\t";
		}
		stream << root->data << std::endl;
		Print(stream, root->right, depth + 1);
	}
	Node*& GetNode(Node*& root, int num)
	{
		if (root == nullptr || root->data == num)
		{
			return root;
		}
		if (root->data > num)
		{
			return GetNode(root->left, num);
		}
		if (root->data < num)
		{
			return GetNode(root->right, num);
		}
	}

	Node* Extract(Node*& root)
	{
		Node* tmp = root;
		if ((root->left == nullptr) && (root->right == nullptr))
		{
			root = nullptr;
		}
		else if (root->left == nullptr)
		{
			root = root->right;
		}
		else if (root->right == nullptr)
		{
			root = root->left;
		}
		else if (root->left->right == nullptr)
		{
			root->left->right = root->right;
			root = root->left;
		}
		else if (root->right->left == nullptr)
		{
			root->right->left = root->left;
			root = root->right;
		}
		else
		{
			Node* troot = root->left;
			while (troot->right->right != nullptr)
			{
				troot = troot->right;
			}
			Node* newroot = Extract(troot->right);
			newroot->left = root->left;
			newroot->right = root->right;
			root = newroot;
		}
		tmp->left = nullptr;
		tmp->right = nullptr;
		return tmp;
	}

public:
	BTree() : root(nullptr) {}

	void Add(int data)
	{
		Insert(root, new Node(data));
	}

	void Remove(int data)
	{
		Node*& node = GetNode(root, data);
		if (node != nullptr)
		{
			Node* extracted = Extract(node);
			delete  extracted;
		}
	}

	friend std::ostream& operator<<(std::ostream& stream, BTree& tree)
	{
		stream << "__________________" << std::endl;
		if (tree.root == nullptr)
		{
			stream << "NOTHING" << std::endl;
		}
		else
		{
			tree.Print(stream, tree.root);
		}
		stream << "__________________" << std::endl;
		return stream;
	}
};

int main(int argc, char* argv[])
{
	BTree tree;
	tree.Add(13);
	tree.Add(5);
	tree.Add(34);
	tree.Add(3);
	tree.Add(8);
	tree.Add(21);
	tree.Add(55);
	tree.Add(1);
	tree.Add(0);
	tree.Add(2);
	tree.Add(144);
	tree.Add(89);
	tree.Add(233);
	std::cout << tree << std::endl;
	tree.Remove(5);
	std::cout << tree << std::endl;
	return EXIT_SUCCESS;
}