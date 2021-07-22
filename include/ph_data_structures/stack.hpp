#pragma once

/**
 - read last element
 - pop last element
 - push last element
 */


namespace ph::data_structures
{
    template <typename T, size_t N>
    struct stack
    {
        T _data [N];
        size_t _curr {0};
        
        constexpr auto top () noexcept -> auto&
        {
            return _data [_curr];
        }
        
        constexpr auto push (auto && v) noexcept -> void
        {
            _data [_curr] = std::forward <decltype (v)> (v);
            ++_curr;
        }
        
        constexpr auto pop () noexcept -> auto&&
        {
//            --_curr;
            return std::move (_data [--_curr]);
        }
        
    };
    
    template <typename T, typename... U>
    stack (T, U...) -> stack <std::common_type_t <T, U...>, sizeof... (U) + 1>;
    
    
    template <size_t N>
    struct stack_2
    {
        std::byte _data [N];
        size_t curr {0};
        
        constexpr auto top () noexcept -> auto&
        {
            return _data [curr];
        }
        
    };
}
