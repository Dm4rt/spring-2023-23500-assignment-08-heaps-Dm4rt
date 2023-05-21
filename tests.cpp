#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "heap.h"

TEST_CASE("Testing heapify function") {
    std::vector<int> arr = {4, 10, 3, 5, 1};
    int size = arr.size();

    SUBCASE("Heapify an array") {
        heapify(arr, size, 0);
        CHECK(arr == std::vector<int>({10, 5, 3, 4, 1}));
    }

    SUBCASE("Heapify a value no children") {
        heapify(arr, size, 4);
        CHECK(arr == std::vector<int>({4, 10, 3, 5, 1}));
    }
}

TEST_CASE("Testing buildHeap function") {
    std::vector<int> arr = {9, 5, 7, 2, 4, 1};
    int size = arr.size();

    buildHeap(arr, size);
    CHECK(arr == std::vector<int>({9, 5, 7, 2, 4, 1}));

    std::vector<int> arr2 = {10, 3, 8, 2, 6};
    int size2 = arr2.size();

    buildHeap(arr2, size2);
    CHECK(arr2 == std::vector<int>({10, 6, 8, 2, 3}));
}

TEST_CASE("Testing heapsort function") {
    std::vector<int> arr = {9, 5, 7, 2, 4, 1};
    heapsort(arr);
    CHECK(arr == std::vector<int>({1, 2, 4, 5, 7, 9}));

    std::vector<int> arr2 = {10, 3, 8, 2, 6};
    heapsort(arr2);
    CHECK(arr2 == std::vector<int>({2, 3, 6, 8, 10}));
}
