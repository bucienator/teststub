#include <gmock/gmock.h>

TEST(PlaceholderTest, Dummy)
{
	const int aNumber = 1;

	ASSERT_THAT(aNumber, ::testing::Eq(1));
}
