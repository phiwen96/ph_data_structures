#pragma once


namespace ph::data_structures
{
    template <typename T, size_t N>
    struct queue
    {
        T _data [N];
        
        size_t curr {0};
    };
    
    template <typename T, typename... U>
    queue (T, U...) -> queue <std::common_type_t <T, U...>, sizeof... (U) + 1>;
}
