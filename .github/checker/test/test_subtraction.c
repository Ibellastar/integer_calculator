#include "unity.h"
#include "calculator.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_subtraction(void) {
    TEST_ASSERT_EQUAL_INT(4, subtract(8, 4));
}