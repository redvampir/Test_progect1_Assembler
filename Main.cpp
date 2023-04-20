//int Make_Sum(int one_value, int another_value)
//{
//	__asm
//	{
//		mov eax, one_value
//		add eax, another_value
//	}
//}

extern "C" int Make_Sum(int one_value, int another_value);

int main()
{
	int a;

	a = Make_Sum(1, 3);
}