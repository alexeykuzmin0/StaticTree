#pragma once

namespace static_tree
{
	template <class U, class V>
	struct tuple_concat;

	template<template<class...> class T, class... AList, class... BList>
	struct tuple_concat<T<AList...>, T<BList...>>
	{
		using type = T<AList..., BList...>;
	};

	template <class U, class V>
	using tuple_concat_t = typename tuple_concat<U, V>::type;

	template <class U, class V>
	struct tuple_push;

	template<template<class...> class T, class... AList, class B>
	struct tuple_push<T<AList...>, B>
	{
		using type = T<AList..., B>;
	};

	template <class U, class V>
	using tuple_push_t = typename tuple_push<U, V>::type;
	
	template<size_t number>
	struct num : std::integral_constant<size_t, number> {};


    // Empty tree
    struct NIL{};
}
