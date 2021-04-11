
// Copyright Paul Raffer 2020 - 2021.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE or copy at
// https://www.boost.org/LICENSE_1_0.txt)

#if __cplusplus >= 201103L

#include "gpl/finally/finally.hpp"


namespace gpl { // implementation

finally::finally(std::function<void ()> action)
:
	action{std::move(action)}
{}

finally::~finally()
{
	action();
}

} // namespace raffer


#endif // __cplusplus >= 201103L
