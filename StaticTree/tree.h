#pragma once

namespace static_tree {
    namespace {
        enum class color {
            RED, BLACK
        };
    }

    // Empty tree
    struct NIL{};

    // General tree
    template<class T, class Left, class Right, class Comp, color Color>
    struct node {
        using type = T;
        using left = Left;
        using right = Right;
        using comp = Comp;
        using color = std::integral_constant<color, Color>;
    };

    // Tree node with no children
    template <typename T, typename Comp, color Color>
    using leaf = node<T, NIL, NIL, Comp, Color>;
}
