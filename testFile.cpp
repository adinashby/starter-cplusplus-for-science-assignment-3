/* DO NOT MODIFY THIS FILE */

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "labFile.hpp"

TEST_CASE("test1", "Array creation and rotation are correct") {
    SECTION("Array size 5, starting integer 1") {
        std::vector<int> arr = createAndRotateArray(5, 1);
        std::vector<int> expected = {7, 10, 1, 4, 13};
        REQUIRE(arr == expected);
    }

    SECTION("Array size 11, starting integer 0") {
        std::vector<int> arr = createAndRotateArray(11, 0);
        std::vector<int> expected = {24, 27, 18, 21, 12, 15, 6, 9, 0, 3, 30};
        REQUIRE(arr == expected);
    }
}

TEST_CASE("test2", "Matrix is a magic square") {
    SECTION("3x3 Magic Square") {
        std::vector<std::vector<int>> matrix = {
            {4, 9, 2},
            {3, 5, 7},
            {8, 1, 6}
        };
        REQUIRE(isMagicSquare(matrix) == true);
    }

    SECTION("3x3 Non-Magic Square") {
        std::vector<std::vector<int>> matrix = {
            {4, 9, 2},
            {3, 5, 7},
            {7, 1, 6}
        };
        REQUIRE(isMagicSquare(matrix) == false);
    }

    SECTION("Empty Matrix") {
        std::vector<std::vector<int>> matrix = {};
        REQUIRE(isMagicSquare(matrix) == false);
    }
}

TEST_CASE("test3", "Magic Square Generation") {
    SECTION("3x3 Magic Square") {
        auto magicSquare = generateMagicSquare(3);
        REQUIRE(isMagicSquare(magicSquare));
    }

    SECTION("5x5 Magic Square") {
        auto magicSquare = generateMagicSquare(5);
        REQUIRE(isMagicSquare(magicSquare));
    }
}