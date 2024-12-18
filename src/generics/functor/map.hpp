#ifndef FUNCTIONAL_GENERICS_FUNCTOR_MAP_HPP
#define FUNCTIONAL_GENERICS_FUNCTOR_MAP_HPP

#include <functional>
#include <map>
#include <string>
#include <vector>

namespace functional {
    /**
     * ∀ F A B. (A -> B) -> FA -> FB
     */
    template <template <typename...> typename F, typename A, typename B>
    F<B> map(const std::function<B(A)> &mapper, const F<A> &source);

    /**
     * ∀ F A B. (const A& -> B) -> FA -> FB
     */
    template <template <typename...> typename F, typename A, typename B>
    F<B> map(const std::function<B(const A &)> &mapper, const F<A> &source);

    /**
     * (char -> char) -> std:string -> std::string
     */
    std::string map(const std::function<char(char)> &mapper, const std::string &source);

    /**
     * ∀ A B C. (const A&, const B& -> C) -> std::map<A, B> -> std::vector<C>
     */
    template <typename A, typename B, typename C>
    std::vector<C> map(const std::function<C(const A &, const B &)> &mapper, const std::map<A, B> &source);
} // namespace functional

#endif
