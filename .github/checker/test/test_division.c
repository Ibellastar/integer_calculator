#include "unity.h"
#include "calculator.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_division(void) {
    TEST_ASSERT_EQUAL_INT(0, divide(5, 0));
}