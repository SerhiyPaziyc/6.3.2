#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 10;
			int a[n] = { 4, 3, 78, -91, 57, 34, 96, 69, 2, -1 };
			t = Sum(a, n, 0);
			Assert::AreEqual(37, t);
		}
	};
}