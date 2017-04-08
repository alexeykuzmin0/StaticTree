#pragma once

namespace static_tree
{
    template<size_t number>
    struct num : std::integral_constant<size_t, number> {};

    struct num_comp {
        template <typename U, typename V>
        struct lt : std::integral_constant<bool, (U::value < V::value)> {};

        template <typename U, typename V>
        struct eq : std::integral_constant<bool, (U::value == V::value)> {};
    };
}
