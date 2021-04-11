
// Copyright Paul Raffer 2020 - 2021.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE or copy at
// https://www.boost.org/LICENSE_1_0.txt)

#if __cplusplus >= 201103L

#ifndef GPL_FINALLY_FINALLY_HPP
#define GPL_FINALLY_FINALLY_HPP


#include <functional>


namespace gpl { // interface

class finally {
	private: std::function<void ()> action;


	public: explicit finally(std::function<void ()> action);
	public: ~finally();
};

} // namespace raffer


#endif // GPL_FINALLY_FINALLY_HPP

#endif //  __cplusplus >= 201103L
