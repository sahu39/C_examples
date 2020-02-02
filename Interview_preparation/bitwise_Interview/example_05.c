/***How to set bit
    How to Clear a particular bit
    How to Check particular bit is set in c****/
#include <stdio.h>

#define SET_BIT(x,POS)  (x | (1 << POS))
#define CHECK_BIT(x,POS) (x & (1 << POS))
#define TOGGLE_BIT(x,POS) (x ^ (1 << POS))
#define CLEAR_BIT(x,POS) (x & (~(1 << POS)))


int main(){
	int x = 0x15;
	int result;
	result = SET_BIT(x,1);
	printf("Setting position 1 bit results:%x\n",result);
	result = CHECK_BIT(x,2);
	printf("Checking bit position 2 is %d\n",result);
	result = TOGGLE_BIT(x,7);
	printf("Toggling 7th bit results:%x\n",result);
	result = TOGGLE_BIT(x,2);
	printf("Toggling 2nd bit results:%x\n",result);
	result = CLEAR_BIT(x,0);
	printf("Clearing 0th bit position results:%x\n",result);
	return 0;
}
