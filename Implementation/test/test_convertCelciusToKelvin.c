
#include "unity.h"
#include "convertCelciusToKelvin.h" /* The unit to be tested. */

void setUp (void) {} /* Is run before every test, put unit init calls here. */
void tearDown (void) {} /* Is run after every test, put unit clean-up calls here. */

void test_convertCelciusToKelvin(void)
{
    TEST_IGNORE_MESSAGE("Hello world!"); /* Ignore this test but print a message. */
}

int main (void)
{
    UNITY_BEGIN();
    RUN_TEST(test_convertCelciusToKelvin); /* Run the test. */
    return UNITY_END();
}  
	