#include "stdafx.h"
#include "CppUnitTest.h"
#include "../StaticTree/tree.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{		
	using namespace static_tree;
	using namespace std;

	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TupleConcat)
		{
			static_assert(is_same_v<
				tuple_concat_t<tuple<int>, tuple<string>>,
				tuple<int, string>>,
				"tuple concat test int-string");
			static_assert(is_same_v<
				tuple_concat_t<tuple<int, int>, tuple<string, float>>,
				tuple<int, int, string, float>>,
				"tuple concat test int-int-string-float");
		}

		TEST_METHOD(TuplePush)
		{
			static_assert(is_same_v<
				tuple_push_t<tuple<int>, string>,
				tuple<int, string>>,
				"tuple push test int-string");
			static_assert(is_same_v<
				tuple_push_t<tuple<int, int, string>, float>,
				tuple<int, int, string, float>>,
				"tuple push test int-int-string-float");
		}
	};
}
