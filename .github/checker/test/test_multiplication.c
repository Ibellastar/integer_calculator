#include "unity.h"
#include "calculator.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_multiplication(void) {
    TEST_ASSERT_EQUAL_INT(6, multiply(3, 2));
}