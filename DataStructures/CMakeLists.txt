project(DataStructures)
cmake_minimum_required(VERSION 3.15)

set(LINKEDLIST "LinkedList.h" "LinkedList.cpp")
set(GRAPH "Graph.h" "Graph.cpp")
set(QUEUE "Queue.h" "Queue.cpp")

add_executable(${PROJECT_NAME} ${LINKEDLIST} ${GRAPH} ${QUEUE} "main.cpp")
