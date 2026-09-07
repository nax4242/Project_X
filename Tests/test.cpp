#include "pch.h"
#include "Triangle.h"

TEST(TriangleTests, DeafultConstructorTest) {
	Triangle triangle;

	EXPECT_EQ(triangle.get_side(), 1);
	EXPECT_EQ(triangle.get_height(), 1);
}

TEST(TriangleTests, InitConstructorTest) {
	Triangle triangle(67, 53);

	EXPECT_EQ(triangle.get_side(), 67);
	EXPECT_EQ(triangle.get_height(), 53);
}

TEST(TriangleTests, InitConstructorThrowWithIncorectSideTest) {
	EXPECT_THROW(Triangle(-67, 53), std::invalid_argument);
}

TEST(TriangleTests, InitConstructorThrowWithIncorrectHeightTest) {
	EXPECT_THROW(Triangle(67, -53), std::invalid_argument);
}

TEST(TriangleTests, SetSideTest) {
	Triangle triangle;

	triangle.set_side(67);
	EXPECT_EQ(triangle.get_side(), 67);
}

TEST(TriangleTests, SetHeightTest) {
	Triangle triangle;

	triangle.set_height(67);
	EXPECT_EQ(triangle.get_height(), 67);
}

TEST(TriangleTests, SetSideThrowTest) {
	Triangle triangle;

	EXPECT_THROW(triangle.set_side(-67), std::invalid_argument);
}

TEST(TriangleTests, SetHeightThrowTest) {
	Triangle triangle;

	EXPECT_THROW(triangle.set_height(-67), std::invalid_argument);
}

TEST(TriangleTests, CalculateAreaTest) {
	Triangle triangle(10, 6);

	EXPECT_EQ(triangle.calculate_area(), 30);
}