
#include <gtest/gtest.h>
#include "../class_A.h"

TEST(class_A, add) {
	A a;
    ASSERT_EQ(0, a.add(1, -1));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
