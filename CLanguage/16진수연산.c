void 16Áø¼ö()
{
	int nResult = 0x11223344;

	printf("%X\n", nResult & 0xFFFF0000); //F=15
	printf("%X\n", nResult >> 16);
	printf("%X\n", nResult << 8);
	printf("%X\n", nResult | 0x2211FFFF);
	printf("%X\n", nResult ^ 0x2211FFFF);
	printf("%X\n", ~nResult);

}