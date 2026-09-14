cmake_minimum_required(VERSION 3.16)
project(whu_dsa_from_scratch LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
enable_testing()
add_library(whudsa STATIC
    src/linear/seq_list.cpp
    src/linear/singly_linked_list.cpp
    src/linear/doubly_linked_list.cpp
    src/linear/circular_linked_list.cpp
    src/linear/unrolled_linked_list.cpp
    src/stack_queue/array_stack.cpp
    src/stack_queue/linked_stack.cpp
    src/stack_queue/circular_queue.cpp
    src/stack_queue/linked_queue.cpp
    src/string/seq_string.cpp
    src/string/linked_string.cpp
    src/string/kmp.cpp
    src/string/boyer_moore.cpp
    src/tree/array_binary_tree.cpp
    src/tree/binary_tree.cpp
    src/tree/general_tree.cpp
    src/tree/huffman_tree.cpp
    src/tree/bst.cpp
    src/tree/avl.cpp
    src/priority_queue/binary_heap.cpp
    src/priority_queue/d_ary_heap.cpp
    src/priority_queue/leftist_heap.cpp
    src/priority_queue/skew_heap.cpp
    src/priority_queue/binomial_heap.cpp
    src/graph/adjacency_matrix.cpp
    src/graph/adjacency_list.cpp
    src/graph/traversal.cpp
    src/graph/connectivity.cpp
    src/graph/shortest_path.cpp
    src/graph/mst.cpp
    src/graph/topological_sort.cpp
    src/graph/critical_path.cpp
    src/set/disjoint_set.cpp
    src/sorting/insertion_sort.cpp
    src/sorting/selection_sort.cpp
    src/sorting/bubble_sort.cpp
    src/sorting/quick_sort.cpp
    src/sorting/merge_sort.cpp
    src/sorting/heap_sort.cpp
    src/searching/sequential_search.cpp
    src/searching/binary_search.cpp
    src/searching/indexed_search.cpp
    src/searching/hash_table.cpp
    src/index/inverted_index.cpp
    src/index/bitmap_index.cpp
    src/index/b_tree.cpp
    src/index/b_plus_tree.cpp
    src/algorithms/enumeration.cpp
    src/algorithms/backtracking.cpp
    src/algorithms/branch_and_bound.cpp
    src/algorithms/divide_and_conquer.cpp
    src/algorithms/dynamic_programming.cpp
    src/algorithms/greedy.cpp
)
target_include_directories(whudsa PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
add_executable(whudsa_hello examples/hello.cpp)
target_link_libraries(whudsa_hello PRIVATE whudsa)
add_executable(test_linear_seq_list tests/linear/test_seq_list.cpp)
target_link_libraries(test_linear_seq_list PRIVATE whudsa)
add_test(NAME test_linear_seq_list COMMAND test_linear_seq_list)
add_executable(test_linear_singly_linked_list tests/linear/test_singly_linked_list.cpp)
target_link_libraries(test_linear_singly_linked_list PRIVATE whudsa)
add_test(NAME test_linear_singly_linked_list COMMAND test_linear_singly_linked_list)
add_executable(test_linear_doubly_linked_list tests/linear/test_doubly_linked_list.cpp)
target_link_libraries(test_linear_doubly_linked_list PRIVATE whudsa)
add_test(NAME test_linear_doubly_linked_list COMMAND test_linear_doubly_linked_list)
add_executable(test_linear_circular_linked_list tests/linear/test_circular_linked_list.cpp)
target_link_libraries(test_linear_circular_linked_list PRIVATE whudsa)
add_test(NAME test_linear_circular_linked_list COMMAND test_linear_circular_linked_list)
add_executable(test_linear_unrolled_linked_list tests/linear/test_unrolled_linked_list.cpp)
target_link_libraries(test_linear_unrolled_linked_list PRIVATE whudsa)
add_test(NAME test_linear_unrolled_linked_list COMMAND test_linear_unrolled_linked_list)
add_executable(test_stack_queue_array_stack tests/stack_queue/test_array_stack.cpp)
target_link_libraries(test_stack_queue_array_stack PRIVATE whudsa)
add_test(NAME test_stack_queue_array_stack COMMAND test_stack_queue_array_stack)
add_executable(test_stack_queue_linked_stack tests/stack_queue/test_linked_stack.cpp)
target_link_libraries(test_stack_queue_linked_stack PRIVATE whudsa)
add_test(NAME test_stack_queue_linked_stack COMMAND test_stack_queue_linked_stack)
add_executable(test_stack_queue_circular_queue tests/stack_queue/test_circular_queue.cpp)
target_link_libraries(test_stack_queue_circular_queue PRIVATE whudsa)
add_test(NAME test_stack_queue_circular_queue COMMAND test_stack_queue_circular_queue)
add_executable(test_stack_queue_linked_queue tests/stack_queue/test_linked_queue.cpp)
target_link_libraries(test_stack_queue_linked_queue PRIVATE whudsa)
add_test(NAME test_stack_queue_linked_queue COMMAND test_stack_queue_linked_queue)
add_executable(test_string_seq_string tests/string/test_seq_string.cpp)
target_link_libraries(test_string_seq_string PRIVATE whudsa)
add_test(NAME test_string_seq_string COMMAND test_string_seq_string)
add_executable(test_string_linked_string tests/string/test_linked_string.cpp)
target_link_libraries(test_string_linked_string PRIVATE whudsa)
add_test(NAME test_string_linked_string COMMAND test_string_linked_string)
add_executable(test_string_kmp tests/string/test_kmp.cpp)
target_link_libraries(test_string_kmp PRIVATE whudsa)
add_test(NAME test_string_kmp COMMAND test_string_kmp)
add_executable(test_string_boyer_moore tests/string/test_boyer_moore.cpp)
target_link_libraries(test_string_boyer_moore PRIVATE whudsa)
add_test(NAME test_string_boyer_moore COMMAND test_string_boyer_moore)
add_executable(test_tree_array_binary_tree tests/tree/test_array_binary_tree.cpp)
target_link_libraries(test_tree_array_binary_tree PRIVATE whudsa)
add_test(NAME test_tree_array_binary_tree COMMAND test_tree_array_binary_tree)
add_executable(test_tree_binary_tree tests/tree/test_binary_tree.cpp)
target_link_libraries(test_tree_binary_tree PRIVATE whudsa)
add_test(NAME test_tree_binary_tree COMMAND test_tree_binary_tree)
add_executable(test_tree_general_tree tests/tree/test_general_tree.cpp)
target_link_libraries(test_tree_general_tree PRIVATE whudsa)
add_test(NAME test_tree_general_tree COMMAND test_tree_general_tree)
add_executable(test_tree_huffman_tree tests/tree/test_huffman_tree.cpp)
target_link_libraries(test_tree_huffman_tree PRIVATE whudsa)
add_test(NAME test_tree_huffman_tree COMMAND test_tree_huffman_tree)
add_executable(test_tree_bst tests/tree/test_bst.cpp)
target_link_libraries(test_tree_bst PRIVATE whudsa)
add_test(NAME test_tree_bst COMMAND test_tree_bst)
add_executable(test_tree_avl tests/tree/test_avl.cpp)
target_link_libraries(test_tree_avl PRIVATE whudsa)
add_test(NAME test_tree_avl COMMAND test_tree_avl)
add_executable(test_priority_queue_binary_heap tests/priority_queue/test_binary_heap.cpp)
target_link_libraries(test_priority_queue_binary_heap PRIVATE whudsa)
add_test(NAME test_priority_queue_binary_heap COMMAND test_priority_queue_binary_heap)
add_executable(test_priority_queue_d_ary_heap tests/priority_queue/test_d_ary_heap.cpp)
target_link_libraries(test_priority_queue_d_ary_heap PRIVATE whudsa)
add_test(NAME test_priority_queue_d_ary_heap COMMAND test_priority_queue_d_ary_heap)
add_executable(test_priority_queue_leftist_heap tests/priority_queue/test_leftist_heap.cpp)
target_link_libraries(test_priority_queue_leftist_heap PRIVATE whudsa)
add_test(NAME test_priority_queue_leftist_heap COMMAND test_priority_queue_leftist_heap)
add_executable(test_priority_queue_skew_heap tests/priority_queue/test_skew_heap.cpp)
target_link_libraries(test_priority_queue_skew_heap PRIVATE whudsa)
add_test(NAME test_priority_queue_skew_heap COMMAND test_priority_queue_skew_heap)
add_executable(test_priority_queue_binomial_heap tests/priority_queue/test_binomial_heap.cpp)
target_link_libraries(test_priority_queue_binomial_heap PRIVATE whudsa)
add_test(NAME test_priority_queue_binomial_heap COMMAND test_priority_queue_binomial_heap)
add_executable(test_graph_adjacency_matrix tests/graph/test_adjacency_matrix.cpp)
target_link_libraries(test_graph_adjacency_matrix PRIVATE whudsa)
add_test(NAME test_graph_adjacency_matrix COMMAND test_graph_adjacency_matrix)
add_executable(test_graph_adjacency_list tests/graph/test_adjacency_list.cpp)
target_link_libraries(test_graph_adjacency_list PRIVATE whudsa)
add_test(NAME test_graph_adjacency_list COMMAND test_graph_adjacency_list)
add_executable(test_graph_traversal tests/graph/test_traversal.cpp)
target_link_libraries(test_graph_traversal PRIVATE whudsa)
add_test(NAME test_graph_traversal COMMAND test_graph_traversal)
add_executable(test_graph_connectivity tests/graph/test_connectivity.cpp)
target_link_libraries(test_graph_connectivity PRIVATE whudsa)
add_test(NAME test_graph_connectivity COMMAND test_graph_connectivity)
add_executable(test_graph_shortest_path tests/graph/test_shortest_path.cpp)
target_link_libraries(test_graph_shortest_path PRIVATE whudsa)
add_test(NAME test_graph_shortest_path COMMAND test_graph_shortest_path)
add_executable(test_graph_mst tests/graph/test_mst.cpp)
target_link_libraries(test_graph_mst PRIVATE whudsa)
add_test(NAME test_graph_mst COMMAND test_graph_mst)
add_executable(test_graph_topological_sort tests/graph/test_topological_sort.cpp)
target_link_libraries(test_graph_topological_sort PRIVATE whudsa)
add_test(NAME test_graph_topological_sort COMMAND test_graph_topological_sort)
add_executable(test_graph_critical_path tests/graph/test_critical_path.cpp)
target_link_libraries(test_graph_critical_path PRIVATE whudsa)
add_test(NAME test_graph_critical_path COMMAND test_graph_critical_path)
add_executable(test_set_disjoint_set tests/set/test_disjoint_set.cpp)
target_link_libraries(test_set_disjoint_set PRIVATE whudsa)
add_test(NAME test_set_disjoint_set COMMAND test_set_disjoint_set)
add_executable(test_sorting_insertion_sort tests/sorting/test_insertion_sort.cpp)
target_link_libraries(test_sorting_insertion_sort PRIVATE whudsa)
add_test(NAME test_sorting_insertion_sort COMMAND test_sorting_insertion_sort)
add_executable(test_sorting_selection_sort tests/sorting/test_selection_sort.cpp)
target_link_libraries(test_sorting_selection_sort PRIVATE whudsa)
add_test(NAME test_sorting_selection_sort COMMAND test_sorting_selection_sort)
add_executable(test_sorting_bubble_sort tests/sorting/test_bubble_sort.cpp)
target_link_libraries(test_sorting_bubble_sort PRIVATE whudsa)
add_test(NAME test_sorting_bubble_sort COMMAND test_sorting_bubble_sort)
add_executable(test_sorting_quick_sort tests/sorting/test_quick_sort.cpp)
target_link_libraries(test_sorting_quick_sort PRIVATE whudsa)
add_test(NAME test_sorting_quick_sort COMMAND test_sorting_quick_sort)
add_executable(test_sorting_merge_sort tests/sorting/test_merge_sort.cpp)
target_link_libraries(test_sorting_merge_sort PRIVATE whudsa)
add_test(NAME test_sorting_merge_sort COMMAND test_sorting_merge_sort)
add_executable(test_sorting_heap_sort tests/sorting/test_heap_sort.cpp)
target_link_libraries(test_sorting_heap_sort PRIVATE whudsa)
add_test(NAME test_sorting_heap_sort COMMAND test_sorting_heap_sort)
add_executable(test_searching_sequential_search tests/searching/test_sequential_search.cpp)
target_link_libraries(test_searching_sequential_search PRIVATE whudsa)
add_test(NAME test_searching_sequential_search COMMAND test_searching_sequential_search)
add_executable(test_searching_binary_search tests/searching/test_binary_search.cpp)
target_link_libraries(test_searching_binary_search PRIVATE whudsa)
add_test(NAME test_searching_binary_search COMMAND test_searching_binary_search)
add_executable(test_searching_indexed_search tests/searching/test_indexed_search.cpp)
target_link_libraries(test_searching_indexed_search PRIVATE whudsa)
add_test(NAME test_searching_indexed_search COMMAND test_searching_indexed_search)
add_executable(test_searching_hash_table tests/searching/test_hash_table.cpp)
target_link_libraries(test_searching_hash_table PRIVATE whudsa)
add_test(NAME test_searching_hash_table COMMAND test_searching_hash_table)
add_executable(test_index_inverted_index tests/index/test_inverted_index.cpp)
target_link_libraries(test_index_inverted_index PRIVATE whudsa)
add_test(NAME test_index_inverted_index COMMAND test_index_inverted_index)
add_executable(test_index_bitmap_index tests/index/test_bitmap_index.cpp)
target_link_libraries(test_index_bitmap_index PRIVATE whudsa)
add_test(NAME test_index_bitmap_index COMMAND test_index_bitmap_index)
add_executable(test_index_b_tree tests/index/test_b_tree.cpp)
target_link_libraries(test_index_b_tree PRIVATE whudsa)
add_test(NAME test_index_b_tree COMMAND test_index_b_tree)
add_executable(test_index_b_plus_tree tests/index/test_b_plus_tree.cpp)
target_link_libraries(test_index_b_plus_tree PRIVATE whudsa)
add_test(NAME test_index_b_plus_tree COMMAND test_index_b_plus_tree)
add_executable(test_algorithms_enumeration tests/algorithms/test_enumeration.cpp)
target_link_libraries(test_algorithms_enumeration PRIVATE whudsa)
add_test(NAME test_algorithms_enumeration COMMAND test_algorithms_enumeration)
add_executable(test_algorithms_backtracking tests/algorithms/test_backtracking.cpp)
target_link_libraries(test_algorithms_backtracking PRIVATE whudsa)
add_test(NAME test_algorithms_backtracking COMMAND test_algorithms_backtracking)
add_executable(test_algorithms_branch_and_bound tests/algorithms/test_branch_and_bound.cpp)
target_link_libraries(test_algorithms_branch_and_bound PRIVATE whudsa)
add_test(NAME test_algorithms_branch_and_bound COMMAND test_algorithms_branch_and_bound)
add_executable(test_algorithms_divide_and_conquer tests/algorithms/test_divide_and_conquer.cpp)
target_link_libraries(test_algorithms_divide_and_conquer PRIVATE whudsa)
add_test(NAME test_algorithms_divide_and_conquer COMMAND test_algorithms_divide_and_conquer)
add_executable(test_algorithms_dynamic_programming tests/algorithms/test_dynamic_programming.cpp)
target_link_libraries(test_algorithms_dynamic_programming PRIVATE whudsa)
add_test(NAME test_algorithms_dynamic_programming COMMAND test_algorithms_dynamic_programming)
add_executable(test_algorithms_greedy tests/algorithms/test_greedy.cpp)
target_link_libraries(test_algorithms_greedy PRIVATE whudsa)
add_test(NAME test_algorithms_greedy COMMAND test_algorithms_greedy)
