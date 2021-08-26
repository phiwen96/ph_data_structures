#include <catch2/catch.hpp>
//#include <ph_concepts/concepts.hpp>
#include <ph_data_structures/data_structures.hpp>

using std::cout, std::endl;

TEST_CASE ("main")
{
    cout << bajs << endl;
    
    cout << "hi" << endl;
}


TEST_CASE ("read file")
{
    SECTION ("char const*")
    {
        // char const* path {__FILE__};
        // ph::file::read (path);
        
    }
    
    SECTION ("std::string")
    {
        
    }
}
