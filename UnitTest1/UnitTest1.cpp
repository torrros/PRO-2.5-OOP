#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\vladt\source\repos\PRO 2.5 OOP\PRO 2.5 OOP\Rational.cpp"
#include "C:\Users\vladt\source\repos\PRO 2.5 OOP\PRO 2.5 OOP\Pair.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational r1({ 14, 7 });
			Rational r2({ 7, 14 });

			Rational r = r1 + r2;
			Assert::IsTrue(r.getpair().geta() == 245 && r.getpair().getb() == 98);
		}
	};
}
