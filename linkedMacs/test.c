#include "/home/magno/Unity/src/unity.h"
#include "macslist.h"

extern void setUp(void){}
extern void tearDown(void){}

void test_sum(void){
	TEST_ASSERT_EQUAL_HEX8(4,somateste(2, 2));
	TEST_ASSERT_EQUAL_HEX8(2,somateste(0, 2));
	TEST_ASSERT_EQUAL_HEX8(0,somateste(-1, 1));
}

int main(){
	UNITY_BEGIN();
	RUN_TEST(test_sum);
	return UNITY_END();
}

// gcc test.c macslist.c /home/magno/Unity/src/unity.c -o test