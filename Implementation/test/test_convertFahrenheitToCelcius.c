
#include "unity.h"
#include "convertFahrenheitToCelcius.h" /* The unit to be tested. */

void setUp (void) {} /* Is run before every test, put unit init calls here. */
void tearDown (void) {} /* Is run after every test, put unit clean-up calls here. */

void test_convertFahrenheitToCelcius(void)
{
    int h01_arr[] = {32,0,0};
    int h01_n = sizeof(h01_arr)/sizeof(int);
	TEST_ASSERT_EQUAL( 0, convertFahrenheitToCelcius(h01_n, (int*)&h01_arr));
}

int main (void)
{
    UNITY_BEGIN();
    RUN_TEST(test_convertFahrenheitToCelcius); /* Run the test. */
    return UNITY_END();
}  
	