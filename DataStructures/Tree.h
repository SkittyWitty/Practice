#pragma once

class TreeNode {
public:
	TreeNode(int data);
	int data;
	TreeNode* right;
	TreeNode* left;
};

class BST {

};

class MinHeightBST {
public:
	MinHeightBST(int sortedArr []);
	TreeNode* root;
	void traverseTree();
private:
	TreeNode* test(int* arr, int start, int end);
	int findMiddle(int start, int end);
	TreeNode* buildTree(int* arr, int start, int end);
	void traverseTreeHelper(TreeNode* node);
};

class TreeUtil {
private:
	static void visit(TreeNode* node);

public:
	static void inOrderTraversal(TreeNode* node);
	static void postOrderTraversal(TreeNode* node);
	static void preOrderTraversal(TreeNode* node);
};
