
#pragma once

#include <type_traits>

#include <brigand/pair.hpp>
#include <brigand/no_such_type.hpp>

namespace brigand
{

    template <class... T>
    struct map;

    template <>
    struct map<>
    {
        template <typename U>
        static no_such_type_ at(U) {}     
    };

    template <typename Last>
    struct map<Last>
    {
    
        static typename Last::second_type at(typename Last::first_type);
    
        template <typename U>
        static no_such_type_ at(U) {}
    
    };

    // fastlane for constant amortized time

    template <class T0, class... T>
    struct map<T0, T...>
    {
        static typename T0::second_type at(typename T0::first_type);
    
        template <typename U>
        static decltype(typename map<T...>::at(U{})) at(U);
    };

    template <class T0, class T1, class... T>
    struct map<T0, T1, T...>
    {
        static typename T0::second_type at(typename T0::first_type);
        static typename T1::second_type at(typename T1::first_type);
    
        template <typename U>
        static decltype(typename map<T...>::at(U{})) at(U);
    };

    template <class T0, class T1, class T2, class... T>
    struct map<T0, T1, T2, T...>
    {
        static typename T0::second_type at(typename T0::first_type);
        static typename T1::second_type at(typename T1::first_type);
        static typename T2::second_type at(typename T2::first_type);
    
        template <typename U>
        static decltype(typename map<T...>::at(U{})) at(U);
    };

    template <class T0, class T1, class T2, class T3, class... T>
    struct map<T0, T1, T2, T3, T...>
    {
        static typename T0::second_type at(typename T0::first_type);
        static typename T1::second_type at(typename T1::first_type);
        static typename T2::second_type at(typename T2::first_type);
        static typename T3::second_type at(typename T3::first_type);
    
        template <typename U>
        static decltype(typename map<T...>::at(U{})) at(U);
    };

    template <class T0, class T1, class T2, class T3, class T4, class... T>
    struct map<T0, T1, T2, T3, T4, T...>
    {
        static typename T0::second_type at(typename T0::first_type);
        static typename T1::second_type at(typename T1::first_type);
        static typename T2::second_type at(typename T2::first_type);
        static typename T3::second_type at(typename T3::first_type);
        static typename T4::second_type at(typename T4::first_type);
    
        template <typename U>
        static decltype(typename map<T...>::at(U{})) at(U);
    };

    template <class T0, class T1, class T2, class T3, class T4, class T5, class... T>
    struct map<T0, T1, T2, T3, T4, T5, T...>
    {
        static typename T0::second_type at(typename T0::first_type);
        static typename T1::second_type at(typename T1::first_type);
        static typename T2::second_type at(typename T2::first_type);
        static typename T3::second_type at(typename T3::first_type);
        static typename T4::second_type at(typename T4::first_type);
        static typename T5::second_type at(typename T5::first_type);
    
        template <typename U>
        static decltype(typename map<T...>::at(U{})) at(U);
    };

    template <class T0, class T1, class T2, class T3, class T4, class T5, class T6, class... T>
    struct map<T0, T1, T2, T3, T4, T5, T6, T...>
    {
        static typename T0::second_type at(typename T0::first_type);
        static typename T1::second_type at(typename T1::first_type);
        static typename T2::second_type at(typename T2::first_type);
        static typename T3::second_type at(typename T3::first_type);
        static typename T4::second_type at(typename T4::first_type);
        static typename T5::second_type at(typename T5::first_type);
        static typename T6::second_type at(typename T6::first_type);
    
        template <typename U>
        static decltype(typename map<T...>::at(U{})) at(U);
    };

    template <class T0, class T1, class T2, class T3, class T4, class T5, class T6, class T7, class... T>
    struct map<T0, T1, T2, T3, T4, T5, T6, T7, T...>
    {
        static typename T0::second_type at(typename T0::first_type);
        static typename T1::second_type at(typename T1::first_type);
        static typename T2::second_type at(typename T2::first_type);
        static typename T3::second_type at(typename T3::first_type);
        static typename T4::second_type at(typename T4::first_type);
        static typename T5::second_type at(typename T5::first_type);
        static typename T6::second_type at(typename T6::first_type);
        static typename T7::second_type at(typename T7::first_type);
    
        template <typename U>
        static decltype(typename map<T...>::at(U{})) at(U);
    };




    template <typename M, typename K>
    struct lookup
    {
        using type = typename decltype(M::at(K{}));
    };

}