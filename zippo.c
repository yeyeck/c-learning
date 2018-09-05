//指针与多维数组 
#include <stdio.h>

int main()
{
	int zippo[4][2] = { {2, 4}, {6, 8}, {1, 3}, {5, 7} };
	
	int (*pz)[2]; // pz指向一个内含两个 int类型值的数组 
	
	pz = zippo;  // 将zippo的地址赋给指针 pz
	
	printf("       pz = %p, pz + 1= %p\n", pz, pz + 1);
	
	printf(" pz[0] = %p, pz[0] + 1 = %p\n", pz[0], pz[0] +1);
	
	printf("     *pz = %p, *pz + 1 = %p\n", *pz, *pz +1);
	
	printf("       pz[0][0] = %d\n", pz[0][0]);
	
	printf("         *pz[0] = %d\n", *pz[0]);
	
	printf("       pz[2][1] = %d\n", pz[2][1]);
	
	printf(" *(*(pz + 2) + 1) = %d\n", *(*(pz + 2)+ 1));
	 
	return 0;
	
}

/*
Output：
        pz = 000000000062FE20, pz + 1= 000000000062FE28
 pz[0] = 000000000062FE20, pz[0] + 1 = 000000000062FE24
     *pz = 000000000062FE20, *pz + 1 = 000000000062FE24
       pz[0][0] = 2
         *pz[0] = 2
       pz[2][1] = 3
        *(pz + 2) = 000000000062FE30
      *(*(pz + 2)) = 1
 *(*(pz + 2) + 1) = 2


----------------------- 
*/
