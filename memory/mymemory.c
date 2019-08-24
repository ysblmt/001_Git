#include "mymemory.h"

/* write 1 byte at a time
 * only write 0 or 1 to an int array 
 */
void *mymemset(void *desc, int val, int size)
{
	if(NULL == desc && size < 0)
	{	
		return NULL;
	}
	void *ret = desc;
	while(size--)
	//int i = 0;
	//char *p = (char *)desc;
	//for(i=0; i<size; i++)
	{
		//p[i] = (char)val;
		*(char *)desc = (char )val;
		desc = (char *)desc + 1;
	}
	return ret;

}

void *mymemcpy(void *desc, void *src, int size)
{
	if(NULL == desc && NULL == src)
		return NULL;
	unsigned char *desc1 = (unsigned char *)desc;
	unsigned char *src1  = (unsigned char *)src;
	if(desc > src && desc1 < (src1 + size)) // memory overlop
	{
		for(int i = size-1; i <= 0; i--)
		{
			*desc1++ = *src1++;
		}
	}
	else
	{
		for(int i = 0; i < size; i++)
		{
			*desc1++ = *src1++;
		}
	}
	return desc;
}

