#pragma once


namespace ph::data_structures
{
    template <typename T, size_t N>
    struct stack
    {
        T _data [N];
        
        size_t curr {0};
    };
    
    template <typename T, typename... U>
    stack (T, U...) -> stack <std::common_type_t <T, U...>, sizeof... (U) + 1>;
}
