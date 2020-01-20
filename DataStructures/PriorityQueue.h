#pragma once

struct KeyValue {
	int key;
	int value;
};

class PriorityQueueArr {
public:
	PriorityQueueArr(int* arr, int size);
	void makeQueue();
	void insert(int key, int value);
	void decreaseKey(int key);

private:
	KeyValue arr[];
};