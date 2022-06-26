# CMakeList.txt : CMake project for LearningDatastructure, include source and define
# project specific logic here.
#
cmake_minimum_required(VERSION 3.8)

project("LearningDatastructure")

# Add source to this project's executable.\
add_executable(01InsertionSort 01InsertionSort/1_StraightInsertionSort.c 01InsertionSort/2_BinaryInsertionSort.c 01InsertionSort/3_二路插入排序.cpp 01InsertionSort/4_表插入排序.cpp 01InsertionSort/5_ShellSort.cpp)
add_executable(02QuickSort 02QuickSort/1_BubbleSort.cpp 02QuickSort/2_QuickSort.cpp)
add_executable(03SelectionSort 03SelectionSort/1_SimpleSelectionSort.c 03SelectionSort/2_TournamentSort.cpp 03SelectionSort/3_HeapSort.c)
add_executable(04MergingSort 04MergingSort/1_MergeSort.c)