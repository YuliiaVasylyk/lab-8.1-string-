#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab-8.1(string)\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[5] = "4-=+";
			char ch[4] = "+-=";
			int k = Count(str, ch[0]) + Count(str, ch[1]) + Count(str, ch[2]);
			Assert::AreEqual(3, k);

		}
	};
}
