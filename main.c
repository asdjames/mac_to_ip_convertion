#include <stdio.h>
#include <assert.h>
#include <stdint.h>

int or(int in1, int in2){
	int result=in1 | in2;
	return result;
}

/*the smallest built-in int is 8 bit*/
int8_t get_last_four_bit(int8_t in){
    int8_t result=0x00;
	int8_t last_four_bit=0x0F;
	result = in | last_four_bit;/*getting the last 4 bits*/
	return result;
}


int main(){
    int result=or(1, 2);
	printf("or(1, 2): %i \n", result);
	assert(result==3);

	int8_t eight_bit_result=0xFF;
    eight_bit_result=get_last_four_bit(0x00);
	printf("HACK: eight_bit_result: %i", eight_bit_result);
    //assert(eight_bit_result==0x00);

    eight_bit_result=get_last_four_bit(0x09);
	assert(eight_bit_result==0x09);
    eight_bit_result=get_last_four_bit(10);
    assert(eight_bit_result==10);
    eight_bit_result=get_last_four_bit(11);
    assert(eight_bit_result==11);
    eight_bit_result=get_last_four_bit(12);
    assert(eight_bit_result==12);
    eight_bit_result=get_last_four_bit(15);
    assert(eight_bit_result==15);
    eight_bit_result=get_last_four_bit(16);
    printf("get_last_four_bit(16): %i \n", eight_bit_result);

    eight_bit_result=get_last_four_bit(32);
    printf("get_last_four_bit(32): %i \n", eight_bit_result);

 
//   assert(result==0);



    printf("end of main() \n");
}
