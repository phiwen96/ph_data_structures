/**
 - access to elements: O (n)
 - insertion: O (n)
 */



#pragma once
#define fwd(x) std::forward <decltype (x)> (x)

namespace ph::data_structures
{
    enum struct state
    {
        
    };
    
    template <typename T>
    struct node
    {
        constexpr node () noexcept : _next {nullptr}
        {
            
        }
        constexpr node (auto&& value) noexcept : _value {fwd (value)}, _next {nullptr}
        {
            
        }
        constexpr node (auto&& first, auto&&... rest) noexcept : _value {fwd (first)}, _next {new node <T> {fwd (rest)...}}
        {
            
        }
        constexpr ~node () noexcept
        {
            if (_next)
            {
                delete _next;
            }
        }
        
        
    private:
        T _value;
        node <T> * _next {nullptr};
    };
    
    template <typename T>
    struct linked_list
    {
        constexpr linked_list () noexcept = default;
        constexpr linked_list (auto&& first, auto&&... rest) noexcept : _root {new node <T> {fwd (first), fwd (rest)...}}, _size (sizeof... (rest) + 1)
        {
            
        }
        constexpr auto size () const noexcept -> size_t
        {
            return _size;
        }
        constexpr ~linked_list () noexcept
        {
            if (_root)
            {
                delete _root;
            }
        }
        // access to element O (n)
        constexpr auto operator[] (size_t k) noexcept -> T&
        {
            auto* curr = _root;
            
            for (int i = 0; i < k; ++i)
            {
                curr = curr -> next;
            }
            
            return curr -> _value;
        }
        // access to element O (n)
        constexpr auto operator[] (size_t k) const noexcept -> T
        {
            auto* curr = _root;
            
            for (int i = 0; i < k; ++i)
            {
                curr = curr -> next;
            }
            
            return curr -> _value;
        }
        // insertion O (n)
        constexpr auto insert (size_t k, auto&& value) noexcept -> void
        {
            auto * curr = _root;
            for (int i = 0; i < k; ++i)
            {
                curr = curr -> _next;
            }
            
//            curr ->
        }
    private:
        node <T> * _root {nullptr};
        size_t _size {0};
    };
}


#undef fwd
