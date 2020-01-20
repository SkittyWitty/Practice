project(DataStructures)
cmake_minimum_required(VERSION 3.15)

set(LINKEDLIST "LinkedList.h" "LinkedList.cpp")
set(GRAPH "Graph.h" "Graph.cpp")
set(QUEUE "Queue.h" "Queue.cpp")
set(TREE "Tree.cpp" "Tree.h")
set(SEARCH_UTIL "SearchUtil.h" "SearchUtil.cpp")
set(PRIOR_QUEUE_ARR "PriorityQueue.h" "PriorityQueue.h")

add_executable(${PROJECT_NAME} ${LINKEDLIST} ${SEARCH_UTIL} ${GRAPH} ${QUEUE} ${TREE} ${PRIOR_QUEUE} "main.cpp")
