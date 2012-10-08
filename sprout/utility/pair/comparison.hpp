#ifndef SPROUT_UTILITY_PAIR_COMPARISON_HPP
#define SPROUT_UTILITY_PAIR_COMPARISON_HPP

#include <sprout/config.hpp>
#include <sprout/utility/pair/pair.hpp>

namespace sprout {
	template<class T1, class T2>
	inline SPROUT_CONSTEXPR bool
	operator==(sprout::pair<T1, T2> const& x, sprout::pair<T1, T2> const& y) {
		return x.first == y.first && x.second == y.second;
	}
	template<class T1, class T2>
	inline SPROUT_CONSTEXPR bool
	operator!=(sprout::pair<T1, T2> const& x, sprout::pair<T1, T2> const& y) {
		return !(x == y);
	}
	template<class T1, class T2>
	inline SPROUT_CONSTEXPR bool
	operator<(sprout::pair<T1, T2> const& x, sprout::pair<T1, T2> const& y) {
		return x.first < y.first || (!(y.first < x.first) && x.second < y.second);
	}
	template<class T1, class T2>
	inline SPROUT_CONSTEXPR bool
	operator>(sprout::pair<T1, T2> const& x, sprout::pair<T1, T2> const& y) {
		return y < x;
	}
	template<class T1, class T2>
	inline SPROUT_CONSTEXPR bool
	operator<=(sprout::pair<T1, T2> const& x, sprout::pair<T1, T2> const& y) {
		return !(y < x);
	}
	template<class T1, class T2>
	inline SPROUT_CONSTEXPR bool
	operator>=(sprout::pair<T1, T2> const& x, sprout::pair<T1, T2> const& y) {
		return !(x < y);
	}
}	// namespace sprout

#endif	// #ifndef SPROUT_UTILITY_PAIR_COMPARISON_HPP
