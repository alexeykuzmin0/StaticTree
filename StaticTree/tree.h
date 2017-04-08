#pragma once

namespace static_tree
{
    // Empty tree
    struct NIL{};

    // General tree
    template<class T, class Left, class Right, class Comp>
    struct node {
        using type = T;
        using left = Left;
        using right = Right;
        using comp = Comp;
    };

    // Tree node with no children
    template <typename T, typename Comp>
    using leaf = node<T, NIL, NIL, Comp>;
}
