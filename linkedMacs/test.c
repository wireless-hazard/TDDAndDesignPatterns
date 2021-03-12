#include "/home/magno/Unity/src/unity.h"
#include "macslist.h"

extern void setUp(void){}
extern void tearDown(void){}

void test_sum(void){
	TEST_ASSERT_EQUAL_HEX8(4,somateste(2, 2));
}

int main(){
	UNITY_BEGIN();
	RUN_TEST(test_sum);
	return UNITY_END();
}