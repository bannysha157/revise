i#include<stdio.h>
int convert_bigendian(int n)
{
	return (((n>>24) & 0x000000ff) | ((n>>8) &(0x0000ff00)) | ((n<<8) &(0x00ff0000)) | ((n<<24) & (0xff000000)));
}
int main()
{
	int i=0x98765432;
	printf("liitle_endian:0x%X\n",i);
	int result=convert_bigendian(i);
	printf("big_endian:0x%X\n",result);
}
