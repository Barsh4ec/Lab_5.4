#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int actual;
			int expected = 1;
			double k = 5;
			double N = 3;
			double s = sqrt((sin(k) * sin(k)) + (cos(N / k) * cos(N / k)));
			actual = s;
			Assert::AreEqual(actual, expected);
		}
	};
}
