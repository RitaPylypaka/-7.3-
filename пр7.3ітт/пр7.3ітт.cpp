#include "pch.h"
#include "CppUnitTest.h"
#include "../пр7.3іт/7.3іт.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace пр73ітт
{
	TEST_CLASS(пр73ітт)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int count = 0;
			int colCount = 2;
			int rowCount = 2;
			int** a = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];
			a[0][0] = -1;
			a[1][1] = -4;
			a[0][1] = 12;
			a[1][0] = 0;
			Part1_Count(a, rowCount, colCount, count);
			Assert::AreEqual(1, count);
		}
	};
}
