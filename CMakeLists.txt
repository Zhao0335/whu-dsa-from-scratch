cmake_minimum_required(VERSION 3.16)
project(whu_dsa_from_scratch LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()

add_executable(repo_sanity tests/repo_sanity.cpp)
add_test(NAME repo_sanity COMMAND repo_sanity)

find_package(Python3 COMPONENTS Interpreter)
if(Python3_Interpreter_FOUND)
    add_custom_target(check_no_stl
        COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/scripts/check_no_stl.py
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        VERBATIM)
endif()

# 前四个参数保持原来的练习接口；后面的 ARGN 用来补组合算法需要链接的支撑模块。
function(add_whudsa_exercise target test_name source test_source)
    set(bin_target ${target}_bin)
    add_executable(${bin_target} EXCLUDE_FROM_ALL ${source} ${test_source} ${ARGN})
    target_include_directories(${bin_target} PRIVATE ${CMAKE_SOURCE_DIR}/include)
    add_custom_target(${target}
        COMMAND $<TARGET_FILE:${bin_target}>
        DEPENDS ${bin_target}
        USES_TERMINAL
        VERBATIM)
endfunction()

add_whudsa_exercise(test_seq_list seq_list src/linear/seq_list.cpp tests/linear/test_seq_list.cpp)
add_whudsa_exercise(test_singly_linked_list singly_linked_list src/linear/singly_linked_list.cpp tests/linear/test_singly_linked_list.cpp)
add_whudsa_exercise(test_doubly_linked_list doubly_linked_list src/linear/doubly_linked_list.cpp tests/linear/test_doubly_linked_list.cpp)
add_whudsa_exercise(test_circular_linked_list circular_linked_list src/linear/circular_linked_list.cpp tests/linear/test_circular_linked_list.cpp)
add_whudsa_exercise(test_unrolled_linked_list unrolled_linked_list src/linear/unrolled_linked_list.cpp tests/linear/test_unrolled_linked_list.cpp)
add_whudsa_exercise(test_array_stack array_stack src/stack_queue/array_stack.cpp tests/stack_queue/test_array_stack.cpp)
add_whudsa_exercise(test_linked_stack linked_stack src/stack_queue/linked_stack.cpp tests/stack_queue/test_linked_stack.cpp)
add_whudsa_exercise(test_circular_queue circular_queue src/stack_queue/circular_queue.cpp tests/stack_queue/test_circular_queue.cpp)
add_whudsa_exercise(test_linked_queue linked_queue src/stack_queue/linked_queue.cpp tests/stack_queue/test_linked_queue.cpp)
add_whudsa_exercise(test_seq_string seq_string src/string/seq_string.cpp tests/string/test_seq_string.cpp)
add_whudsa_exercise(test_linked_string linked_string src/string/linked_string.cpp tests/string/test_linked_string.cpp)
add_whudsa_exercise(test_naive_match naive_match src/string/naive_match.cpp tests/string/test_naive_match.cpp)
add_whudsa_exercise(test_kmp kmp src/string/kmp.cpp tests/string/test_kmp.cpp)
add_whudsa_exercise(test_boyer_moore boyer_moore src/string/boyer_moore.cpp tests/string/test_boyer_moore.cpp)
add_whudsa_exercise(test_binary_tree binary_tree src/tree/binary_tree.cpp tests/tree/test_binary_tree.cpp)
add_whudsa_exercise(test_array_binary_tree array_binary_tree src/tree/array_binary_tree.cpp tests/tree/test_array_binary_tree.cpp)
add_whudsa_exercise(test_general_tree general_tree src/tree/general_tree.cpp tests/tree/test_general_tree.cpp)
add_whudsa_exercise(test_huffman_tree huffman_tree src/tree/huffman_tree.cpp tests/tree/test_huffman_tree.cpp)
add_whudsa_exercise(test_binary_heap binary_heap src/priority_queue/binary_heap.cpp tests/priority_queue/test_binary_heap.cpp)
add_whudsa_exercise(test_d_ary_heap d_ary_heap src/priority_queue/d_ary_heap.cpp tests/priority_queue/test_d_ary_heap.cpp)
add_whudsa_exercise(test_leftist_heap leftist_heap src/priority_queue/leftist_heap.cpp tests/priority_queue/test_leftist_heap.cpp)
add_whudsa_exercise(test_skew_heap skew_heap src/priority_queue/skew_heap.cpp tests/priority_queue/test_skew_heap.cpp)
add_whudsa_exercise(test_binomial_heap binomial_heap src/priority_queue/binomial_heap.cpp tests/priority_queue/test_binomial_heap.cpp)
add_whudsa_exercise(test_adjacency_matrix adjacency_matrix src/graph/adjacency_matrix.cpp tests/graph/test_adjacency_matrix.cpp)
add_whudsa_exercise(test_adjacency_list adjacency_list src/graph/adjacency_list.cpp tests/graph/test_adjacency_list.cpp)
add_whudsa_exercise(test_traversal traversal src/graph/traversal.cpp tests/graph/test_traversal.cpp
    src/graph/adjacency_list.cpp
    src/stack_queue/array_stack.cpp
    src/stack_queue/circular_queue.cpp)
add_whudsa_exercise(test_connectivity connectivity src/graph/connectivity.cpp tests/graph/test_connectivity.cpp
    src/graph/adjacency_list.cpp)
add_whudsa_exercise(test_disjoint_set disjoint_set src/disjoint_set/disjoint_set.cpp tests/disjoint_set/test_disjoint_set.cpp)
add_whudsa_exercise(test_insertion_sort insertion_sort src/sorting/insertion_sort.cpp tests/sorting/test_insertion_sort.cpp)
add_whudsa_exercise(test_selection_sort selection_sort src/sorting/selection_sort.cpp tests/sorting/test_selection_sort.cpp)
add_whudsa_exercise(test_bubble_sort bubble_sort src/sorting/bubble_sort.cpp tests/sorting/test_bubble_sort.cpp)
add_whudsa_exercise(test_quick_sort quick_sort src/sorting/quick_sort.cpp tests/sorting/test_quick_sort.cpp)
add_whudsa_exercise(test_merge_sort merge_sort src/sorting/merge_sort.cpp tests/sorting/test_merge_sort.cpp)
add_whudsa_exercise(test_heap_sort heap_sort src/sorting/heap_sort.cpp tests/sorting/test_heap_sort.cpp)
add_whudsa_exercise(test_shortest_path shortest_path src/graph/shortest_path.cpp tests/graph/test_shortest_path.cpp
    src/graph/adjacency_list.cpp
    src/priority_queue/binary_heap.cpp)
add_whudsa_exercise(test_mst mst src/graph/mst.cpp tests/graph/test_mst.cpp
    src/graph/adjacency_list.cpp
    src/disjoint_set/disjoint_set.cpp)
add_whudsa_exercise(test_topological_sort topological_sort src/graph/topological_sort.cpp tests/graph/test_topological_sort.cpp
    src/graph/adjacency_list.cpp
    src/stack_queue/circular_queue.cpp)
add_whudsa_exercise(test_critical_path critical_path src/graph/critical_path.cpp tests/graph/test_critical_path.cpp
    src/graph/adjacency_list.cpp)
add_whudsa_exercise(test_sequential_search sequential_search src/searching/sequential_search.cpp tests/searching/test_sequential_search.cpp)
add_whudsa_exercise(test_binary_search binary_search src/searching/binary_search.cpp tests/searching/test_binary_search.cpp)
add_whudsa_exercise(test_indexed_search indexed_search src/searching/indexed_search.cpp tests/searching/test_indexed_search.cpp)
add_whudsa_exercise(test_bst bst src/searching/bst.cpp tests/searching/test_bst.cpp)
add_whudsa_exercise(test_avl avl src/searching/avl.cpp tests/searching/test_avl.cpp)
add_whudsa_exercise(test_hash_open_addressing hash_open_addressing src/searching/hash_open_addressing.cpp tests/searching/test_hash_open_addressing.cpp)
add_whudsa_exercise(test_hash_chaining hash_chaining src/searching/hash_chaining.cpp tests/searching/test_hash_chaining.cpp)
add_whudsa_exercise(test_inverted_index inverted_index src/index/inverted_index.cpp tests/index/test_inverted_index.cpp)
add_whudsa_exercise(test_bitmap_index bitmap_index src/index/bitmap_index.cpp tests/index/test_bitmap_index.cpp)
add_whudsa_exercise(test_b_tree b_tree src/index/b_tree.cpp tests/index/test_b_tree.cpp)
add_whudsa_exercise(test_b_plus_tree b_plus_tree src/index/b_plus_tree.cpp tests/index/test_b_plus_tree.cpp)
add_whudsa_exercise(test_enumeration enumeration src/algorithm/enumeration.cpp tests/algorithm/test_enumeration.cpp)
add_whudsa_exercise(test_backtracking backtracking src/algorithm/backtracking.cpp tests/algorithm/test_backtracking.cpp)
add_whudsa_exercise(test_branch_and_bound branch_and_bound src/algorithm/branch_and_bound.cpp tests/algorithm/test_branch_and_bound.cpp)
add_whudsa_exercise(test_divide_and_conquer divide_and_conquer src/algorithm/divide_and_conquer.cpp tests/algorithm/test_divide_and_conquer.cpp)
add_whudsa_exercise(test_dynamic_programming dynamic_programming src/algorithm/dynamic_programming.cpp tests/algorithm/test_dynamic_programming.cpp)
add_whudsa_exercise(test_greedy greedy src/algorithm/greedy.cpp tests/algorithm/test_greedy.cpp)
