project(DataStructures)
cmake_minimum_required(VERSION 3.15)

set(LINKEDLIST "LinkedList.h" "LinkedList.cpp")
set(GRAPH "Graph.h" "Graph.cpp")
set(QUEUE "Queue.h" "Queue.cpp")
set(TREE "Tree.cpp" "Tree.h")
set(GRAPH_UTIL "GraphUtil.hpp")
set(PRIOR_QUEUE_ARR "PriorityQueue.h" "PriorityQueue.h")

add_executable(${PROJECT_NAME} ${LINKEDLIST} ${GRAPH_UTIL} ${GRAPH} ${QUEUE} ${TREE} ${PRIOR_QUEUE} "main.cpp")
