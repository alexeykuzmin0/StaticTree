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
}
