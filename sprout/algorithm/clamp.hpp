#ifndef SPROUT_ALGORITHM_CLAMP_HPP
#define SPROUT_ALGORITHM_CLAMP_HPP

#include <type_traits>
#include <sprout/config.hpp>
#include HDR_FUNCTIONAL_SSCRISK_CEL_OR_SPROUT

namespace sprout {
	//
	// clamp
	//
	template<typename T, typename Compare>
	inline SPROUT_CONSTEXPR T const&
	clamp(T const& value, typename std::common_type<T>::type const& low, typename std::common_type<T>::type const& high, Compare comp) {
		return comp(value, low) ? low
			: comp(high, value) ? high
			: value
			;
	}
	template<typename T>
	inline SPROUT_CONSTEXPR T const&
	clamp(T const& value, typename std::common_type<T>::type const& low, typename std::common_type<T>::type const& high) {
		return sprout::clamp(
			value, low, high,
			NS_SSCRISK_CEL_OR_SPROUT::less<T>()
			);
	}
}	// namespace sprout

#endif	// #ifndef SPROUT_ALGORITHM_CLAMP_HPP