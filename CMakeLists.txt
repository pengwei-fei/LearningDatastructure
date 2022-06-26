# CMakeList.txt : CMake project for LearningDatastructure, include source and define
# project specific logic here.
#
cmake_minimum_required(VERSION 3.8)

project("LearningDatastructure")

# Add source to this project's executable.\

#01InsertionSort
add_executable(1_StraightInsertionSort 01InsertionSort/1_StraightInsertionSort.c)
add_executable(2_BinaryInsertionSort 01InsertionSort/2_BinaryInsertionSort.c)
add_executable(3_ 01InsertionSort/3_.cpp)
add_executable(4_ 01InsertionSort/4_.cpp)
add_executable(5_ShellSort 01InsertionSort/5_ShellSort.cpp)

#02QuickSort
add_executable(1_BubbleSort 02QuickSort/1_BubbleSort.cpp)
add_executable(2_QuickSort 02QuickSort/2_QuickSort.cpp)

#03SelectionSort
add_executable(1_SimpleSelectionSort 03SelectionSort/1_SimpleSelectionSort.c)
add_executable(2_TournamentSort 03SelectionSort/2_TournamentSort.cpp)
add_executable(3_HeapSort 03SelectionSort/3_HeapSort.c)

#04MergingSort
add_executable(1_MergeSort 04MergingSort/1_MergeSort.c)

#05RadixSort
add_executable(1_RadixSort 05RadixSort/1_RadixSort.cpp)