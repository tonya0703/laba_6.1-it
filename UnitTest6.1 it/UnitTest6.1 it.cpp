#include "pch.h"
#include "CppUnitTest.h"
#include "..\ap_6.1 it\6.1 IT.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61it
{
	TEST_CLASS(UnitTest61it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t[] = { 1,3,-5,4,-6 };
			int S = Suma(t, 4);
			Assert::AreEqual(10, 10);
		}
	};
}