#include "unity.h"
#include "calculator.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_addition(void) {
    TEST_ASSERT_EQUAL_INT(7, add(4, 3));
}