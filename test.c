#include<stdio.h>
#include<ctype.h>



void count(char* p, int len)//用指针来存一个char类型的数组
{
	int count_lower = 0;
	int count_upper = 0;
	int count_number = 0;
	for (int i = 0;i < len;i++)
	{
		char c = *(p + i);
		if (isdigit(c))
		{

			count_number++;
		}
		if (islower(c))
		{

			count_lower++;
		}
		if (isupper(c))
		{

			count_upper++;
		}

	}
	printf("%d\n", count_number);
	printf("%d\n", count_upper);
	printf("%d\n", count_lower);
}

int main()
{
	char arr[] = "aAbcDf6548";
	int len = sizeof(arr) / sizeof(arr[0]);
	count(arr, len);



	return 0;
}