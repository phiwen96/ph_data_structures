#include <catch2/catch.hpp>
#include <ph_data_structures/data_structures.hpp>
#include <ph_concepts/concepts.hpp>


//namespace std{
//auto begin (auto&& c) {
//    return c;
//}
//}
//auto begin (auto&& c) {
//    return c;
//}

namespace ph::data_structures
{
    TEST_CASE ("stack")
    {
        auto s_0 = stack {1, 2, 3};
    }
    
    TEST_CASE ("linked_list")
    {
        auto s_0 = linked_list <int> {1, 2, 3};
    }
}
    
namespace ph::virtual_machine
{
    using std::cout, std::endl;
    using namespace ph::concepts;
    
    
    
    
    auto lex = [] (String auto && source)
    {
        enum
        {
            BEGIN,
            NUMBER,
            WHITESPACE
        };
        
        auto current = BEGIN;
        
        // loop through source string
        for (auto && c : source)
        {
            cout << c << endl;
            
            // check current state
            switch (current)
            {
                case BEGIN:
                {
                    if (isdigit (c))
                    {
                        // change current state
                        current = NUMBER;
                    }
                    
                    break;
                }
                    
                case NUMBER:
                {
                    if (not isdigit (c))
                    {
                        if (c == ' ' or c == '\n' or c == '\t')
                        {
                            
                            
                        } else if (c == '.')
                        {
                            
                        }
                    }
                    break;
                }
                    
                default:
                {
                    break;
                }
            }
            
        }
    };
    
    
    enum
    {
        PUSH
    };
    
    auto vm = [] (Range auto && stack, Range auto && code)
    {
        for (auto && instruction : code)
        {
            
        }
    };
    
    TEST_CASE ("")
    {
        
        lex ("1 + 2 * 3 + 4");
//        1 + 2 * 3 + 4 = 11
        int stack [] = {1, 2, 3, 4};
        
        
    }
}
