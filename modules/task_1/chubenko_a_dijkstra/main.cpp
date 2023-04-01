// Copyright 2023 Chubenko Andrey
#include <gtest/gtest.h>
#include <vector>
#include "../../../modules/task_1/chubenko_a_dijkstra/dijkstra.h"

TEST(Dijkstra_Sequential, Test_Count_5) {
    const int size = 5;
    std::vector<int> graph = {0, 6, 7, 0, 0,
                              6, 0, 6, 1, 0,
                              7, 6, 0, 0, 1,
                              0, 1, 0, 0, 8,
                              0, 0, 1, 8, 0,
                             };
    const std::vector<int> expected = {0, 6, 7, 7, 8};
    std::vector<int> dists = get_dists_dijkstra(graph, size, 0);
    
    ASSERT_EQ(dists, expected);
}

#if 0
TEST(Dijkstra_Sequential, Test_Sum_20) {
    const int count = 20;
    int sum = 0;
    for (size_t i = 0; i < count; i++) {
        sum++;
    }
    ASSERT_EQ(count, sum);
}

TEST(Dijkstra_Sequential, Test_Sum_50) {
    const int count = 20;
    int sum = 0;
    for (size_t i = 0; i < count; i++) {
        sum++;
    }
    ASSERT_EQ(count, sum);
}

TEST(Dijkstra_Sequential, Test_Sum_70) {
    const int count = 20;
    int sum = 0;
    for (size_t i = 0; i < count; i++) {
        sum++;
    }
    ASSERT_EQ(count, sum);
}

TEST(Dijkstra_Sequential, Test_Sum_100) {
    const int count = 100;
    int sum = 0;
    for (size_t i = 0; i < count; i++) {
        sum++;
    }
    ASSERT_EQ(count, sum);
}
#endif


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

