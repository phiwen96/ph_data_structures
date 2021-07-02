#include <catch2/catch.hpp>

//
//
//
TEST_CASE ("Constructs and assignments")
{
GIVEN ("User defined classes A B C D")
{
	AND_WHEN ()
	{
		THEN 
		{
			
		}
	}
}
}
//    REQUIRE (is_move_constructible_v <var <int, double, string>>);
//    REQUIRE (is_copy_constructible_v <var <int, double, string>>);
//    REQUIRE (is_move_assignable_v <var <int, double, string>>);
//    REQUIRE (is_copy_assignable_v <var <int, double, string>>);
//
//    GIVEN ("User defined classes A B C D")
//    {
//        AND_WHEN ("All is copy constructible")
//        {
//            REQUIRE (is_copy_constructible_v <A>);
//            REQUIRE (is_copy_constructible_v <C>);
//            REQUIRE (is_copy_constructible_v <D>);
//
//            THEN ("Var should also be copy constructible")
//            {
//                REQUIRE (is_copy_constructible_v <var <A, C, D>>);
//
//                var <A, C, D> v0;
//                var <A, C, D> v1 {v0};
//            }
//        }
//
//        AND_WHEN ("All but one is copy constructible")
//        {
//            REQUIRE (is_copy_constructible_v <A>);
//            REQUIRE (not is_copy_constructible_v <B>);
//            REQUIRE (is_copy_constructible_v <C>);
//
//            THEN ("Var should not be copy constructible")
//            {
//                REQUIRE (not is_copy_constructible_v <var <A, B, C>>);
//            }
//        }
//
//        AND_WHEN ("All is move constructible")
//        {
//            REQUIRE (is_move_constructible_v <A>);
//            REQUIRE (is_move_constructible_v <B>);
//            REQUIRE (is_move_constructible_v <D>);
//
//            THEN ("Var should also be move constructible")
//            {
//                REQUIRE (is_move_constructible_v <var <A, B, D>>);
//
//                REQUIRE (not is_copy_constructible_v <var <A, B, D>>);
//                var <A, B, D> v0;
//                var <A, B, D> v1 {move (v0)};
//            }
//        }
//
//        AND_WHEN ("All but one is move constructible")
//        {
//            REQUIRE (is_move_constructible_v <A>);
//            REQUIRE (is_move_constructible_v <B>);
//            REQUIRE (not is_move_constructible_v <C>);
//
//            THEN ("Var should not be move constructible")
//            {
//                REQUIRE (not is_move_constructible_v <var <A, B, C>>);
//            }
//        }
//
//        AND_WHEN ("All is move assignable")
//        {
//            REQUIRE (is_move_assignable_v <B>);
//            REQUIRE (is_move_assignable_v <C>);
//            REQUIRE (is_move_assignable_v <D>);
//
//            THEN ("Var should also be move constructible")
//            {
//                REQUIRE (is_move_assignable_v <var <B, C, D>>);
//
//
//                REQUIRE (not is_copy_assignable_v <var <B, C, D>>);
//                var <B, C, D> v0;
//                var <B, C, D> v1;
//                v0 = move (v1);
//            }
//        }
//
//        AND_WHEN ("All but one is move assignable")
//        {
//            REQUIRE (not is_move_assignable_v <A>);
//            REQUIRE (is_move_assignable_v <B>);
//            REQUIRE (is_move_assignable_v <C>);
//
//            THEN ("Var should not be move assignable")
//            {
//                REQUIRE (not is_move_assignable_v <var <A, B, C>>);
//            }
//        }
//
//
//        AND_WHEN ("All is copy assignable")
//        {
//            REQUIRE (is_copy_assignable_v <A>);
//            REQUIRE (is_copy_assignable_v <C>);
//            REQUIRE (is_copy_assignable_v <D>);
//
//            THEN ("Var should also be copy constructible")
//            {
//                REQUIRE (is_copy_assignable_v <var <A, C, D>>);
//
//
//                var <A, C, D> v0;
//                var <A, C, D> v1;
//                v0 = v1;
//            }
//        }
//
//        AND_WHEN ("All but one is copy assignable")
//        {
//            REQUIRE (is_copy_assignable_v <A>);
//            REQUIRE (not is_copy_assignable_v <B>);
//            REQUIRE (is_copy_assignable_v <C>);
//
//            THEN ("Var should not be copy assignable")
//            {
//                REQUIRE (not is_copy_assignable_v <var <A, B, C>>);
//            }
//        }
//    }
//}
//
//
//TEST_CASE ("value_type constructs")
//{
//    WHEN ("basics")
//    {
//        {
//            auto v0 = var <int, double, string> {};
//            REQUIRE (v0.active () == -1);
//        }
//        {
//            auto v0 = var <int, double, string> {int {2}};
//            REQUIRE (v0.active () == 0);
//            int& i = v0;
//            REQUIRE (i == 2);
//            i = 3;
//            REQUIRE ((int&) v0 == 3);
//            (int&) v0 = 2;
//            REQUIRE (i == 2);
//        }
//        {
//            auto v0 = var <int, double, string> {double {2}};
//            REQUIRE (v0.active () == 1);
//            double& i = v0;
//            REQUIRE (i == 2);
//            i = 3;
//            REQUIRE ((double&) v0 == 3);
//            (double&) v0 = 2;
//            REQUIRE (i == 2);
//        }
//        {
//            auto v0 = var <int, double, string> {string {"hej"}};
//            REQUIRE (v0.active () == 2);
//            string& i = v0;
//            REQUIRE (i == "hej");
//            i = "då";
//            REQUIRE ((string&) v0 == "då");
//            (string&) v0 = "hej";
//            REQUIRE (i == "hej");
//        }
//    }
//
//    WHEN ("default constructor")
//    {
//        auto v0 = var <int, double, string> {};
//
//        THEN ("v0.active () == -1")
//        {
//            REQUIRE (v0.active () == -1);
//        }
//    }
//
//    WHEN ("copy constructor")
//    {
//
//        REQUIRE (not is_move_constructible_v <C>);
//
//        {
//            auto v0 = var <C, double, string> {C {}};
//            REQUIRE (v0.active () == 0);
//        }
//        {
//            auto v0 = var <double, C, string> {C {}};
//            REQUIRE (v0.active () == 1);
//        }
//        {
//            auto v0 = var <double, string, C> {C {}};
//            REQUIRE (v0.active () == 2);
//        }
//    }
//
//    WHEN ("move constructor")
//    {
//
//        REQUIRE (not is_copy_constructible_v <B>);
//
//        {
//            auto v0 = var <B, double, string> {B {}};
//            REQUIRE (v0.active () == 0);
//        }
//        {
//            auto v0 = var <double, B, string> {B {}};
//            REQUIRE (v0.active () == 1);
//        }
//        {
//            auto v0 = var <double, string, B> {B {}};
//            REQUIRE (v0.active () == 2);
//        }
//    }
//
//    WHEN ("copy assign")
//    {
//
//        REQUIRE (not is_copy_constructible_v <B>);
//
//        {
//            auto v0 = var <B, double, string> {B {}};
//            REQUIRE (v0.active () == 0);
//        }
//        {
//            auto v0 = var <double, B, string> {B {}};
//            REQUIRE (v0.active () == 1);
//        }
//        {
//            auto v0 = var <double, string, B> {B {}};
//            REQUIRE (v0.active () == 2);
//        }
//    }
//}
//
//TEST_CASE (".get <T> ()")
//{
//    GIVEN ("var")
//    {
////        var <int, double, char, string> v0;
//
//    }
//}
//
//TEST_CASE ("")
//{
//    var <A, int, C, D> v0;
////    var <A, int, C, D> v0 {A {}};
////    var <A, int, C, D> v0 {int {4}};
////    var <A, int, C, D> v1 {A {}};
////    var <A, int, C, D> v2 {C {}};
////    var <A, int, C, D> v3 {D {}};
//}
//
//TEST_CASE ("test vari with vector")
//{
////    vector <var <A, B, C, D>> v;
////    v.push_back (A {});
////    REQUIRE (v.back().active() == 0);
//}
//
//TEST_CASE ("")
//{
////    var <int, double, string> v0;
////    REQUIRE (v0.active() == -1);
//////
////    var <int, double, string> v1 {int {0}};
////    REQUIRE (v1.active() == 0);
//
//
//}
//
//TEST_CASE ("")
//{
////    var <D, int, C, A> v0 {C {}};
////
////    REQUIRE (type <int> == v0);
////    REQUIRE (not (type <C> == v0));
////
////    REQUIRE (type <D> != v0);
////    REQUIRE (not (type <int> != v0));
//}
//
//
//TEST_CASE ("call actives (if active) destructor")
//{
////    return;
////    A::alive = 0;
////
////    {
////        var <D, int, C, A> v0 {A {}};
////    }
////
////    REQUIRE (A::alive == 0);
////
////    {
////        var <D, int, C, A> v0 {A {}};
////        REQUIRE (A::alive == 1);
////        v0 = A {};
////        REQUIRE (A::alive == 1);
////        v0 = D {};
////        REQUIRE (A::alive == 0);
////    }
//}
//
//TEST_CASE ("")
//{
////    return;
////    var <D, int, C, A> v0 {int {3}};
////    REQUIRE (v0.get <int> () == 3);
//}
//
//TEST_CASE ("call moved vars active destructor")
//{
////    return;
////    A::alive = 0;
////
////    {
////        var <D, int, C, A> v0 {var <int, double, string> {int {2}}};
////        cout << v0.get<int>() << endl;
////    }
////
////    REQUIRE (A::alive == 0);
//}
//
//
//TEST_CASE ("1")
//{
//
////    return;
////    var <D, int, C, A> v0 {int {4}};
////    assert (v0.get <int> () == 4);
////    v0.get <int> () = 3;
////    assert (v0.get <int> () == 3);
////    int i0 = v0;
////    assert (i0 == 3);
////    int& i1 = v0;
////    ++i1;
////    assert (v0.get<int>() == 4);
////    v0.get<int>() = 3;
////    assert(i1 == 3);
//}
//
//
//
//TEST_CASE("vari vs std::variant")
//{
//    return;
//
//   /**/
//
////    cout << sizeof (variant <int, double, char, string>) << endl;
////    cout << sizeof (var <int, double, char, string>) << endl;
////    int max = 10000000;
//////    int max = 0;
////
////    {
////        Timer <true> t ("variant");
////        for (int i = 0; i < max; ++i)
////        {
////            variant <int, double, char, string> k {string {}};
////        }
////    }
////    {
////        Timer <true> t ("vari");
////        for (int i = 0; i < max; ++i)
////        {
////            var <int, double, char, string> k {string {}};
////        }
////    }
////
////    {
////        variant <int, double, char, string> k {string {}};
////
////        Timer <true> t ("variant move assign");
////
////        for (int i = 0; i < max; ++i)
////        {
////            k = double {3};
////        }
////    }
////    {
////        var <int, double, char, string> k {string {}};
////
////        Timer <true> t ("vari move assign");
////        for (int i = 0; i < max; ++i)
////        {
////            k = double {3};
////        }
////    }
////
////    {
////        variant <int, double, char, string> k {string {}};
////
////        Timer <true> t ("variant if type");
////
////        for (int i = 0; i < max; ++i)
////        {
////            if (k.index() == 3)
////            {
////
////            }
////        }
////    }
////    {
////        var <int, double, char, string> k {string {}};
////
////        Timer <true> t ("vari if type");
////        for (int i = 0; i < max; ++i)
////        {
////            if (type <string> == k)
////            {
////
////            }
////        }
////    }
////
////
//////    var <A, int, C, D> k {C {}};
////    var <A, int, C, D> k {int {4}};
////    cout << k << endl;
////    var <A, C, B, int> k2 {int{7}};
////    k = k2;
//    return;
//
////    cout << k << endl;
////    cout << "====" << endl;
////    k = A{};
////    cout << k << endl;
////
////    cout << "====" << endl;
//////    k = B {};
////    cout << k << endl;
//
//    /**
//     NOT
//     k = string {};
//     */
//}
//
//
