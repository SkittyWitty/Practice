#pragma once

#include "Tree.h"
#include <cmath>
#include <iostream>

using namespace std;

TreeNode::TreeNode(int data) {
	this->data = data;
	this->left = NULL;
	this->right = NULL;
}

MinHeightBST::MinHeightBST(int meh []) {
	int sortedArr[] = { 1,2,3,4,5 };
	int arrLen = sizeof(sortedArr)/sizeof(sortedArr[0]);
	//int len = *(&arr + 1) - arr;
	int middleIndex = findMiddle(0, arrLen);
	root = new TreeNode(sortedArr[middleIndex]);
	
	printf("Array Lengt: %d\n",arrLen);
	printf("Middle Index: %d", middleIndex);
	printf("This is the root: %d\n", root->data);

	root->left = buildTree(sortedArr, 0, middleIndex-1);
	root->right = buildTree(sortedArr, middleIndex+1, arrLen);
}

int MinHeightBST::findMiddle(int start, int end) {
	return floor((end - start)/2.0) + start;
}

TreeNode* MinHeightBST::test(int* arr, int start, int end) {
	int index = findMiddle(start, end);
	int arrItem = arr[index];
	cout << "Middle Index: " << index << endl;
	cout << "array Item: " << arrItem << endl;
	return new TreeNode(arrItem);
}

TreeNode* MinHeightBST::buildTree(int* arr, int start, int end) {
	if (start == end) {
		cout << "returnin Index and element: " << start << "," << arr[start] << endl;
		return new TreeNode(arr[start]);
	}
	else{
		int middleIndex = findMiddle(start, end);
		TreeNode* meh = new TreeNode(arr[middleIndex]);
		if (middleIndex - 1 >= start) {
			meh->left = buildTree(arr, start, middleIndex - 1);
		}
		if (middleIndex + 1 <= end) {
			meh->right = buildTree(arr, middleIndex + 1, end);
		}
	}
}

void MinHeightBST::traverseTree() {
	traverseTreeHelper(root);
}

void MinHeightBST::traverseTreeHelper(TreeNode* node) {
	if (node == nullptr) {
		return;
	}
	else {
		traverseTreeHelper(node->left);
		printf("%d, ", node->data);
		traverseTreeHelper(node->right);
	}
}

void TreeUtil::visit(TreeNode* node) {
	cout << node->data << " " << endl;
}

void TreeUtil::inOrderTraversal(TreeNode* node) {
	if (node == NULL) {
		return;
	}
	inOrderTraversal(node->left);
	visit(node);
	inOrderTraversal(node->right);
}

void TreeUtil::postOrderTraversal(TreeNode* node) {
	if (node == NULL) {
		return;
	}
	postOrderTraversal(node->left);
	postOrderTraversal(node->right);
	visit(node);
}

void TreeUtil::preOrderTraversal(TreeNode* node) {
	if (node == NULL) {
		return;
	}
	visit(node);
	preOrderTraversal(node->left);
	preOrderTraversal(node->right);
}