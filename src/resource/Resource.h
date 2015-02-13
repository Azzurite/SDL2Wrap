/*! @file
 *
 * @date 14.12.2014
 * @author Azzurite
 *
 * @copyright GPL v3
 *   Copyright (C) 2014 Azzurite
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "SDL.h"
#include "boost/optional.hpp"

namespace sdl2wrap {
namespace resource {


class Resource
{
public:

	Resource fromFile(const std::string& path);

	/*!
	 * @brief Default copy constructor.
	 */
	Resource(const Resource&) noexcept;

	/*!
	 * @brief Default move constructor.
	 */
	Resource(Resource&&) noexcept;

	/*!
	 * @brief Default destructor.
	 */
	virtual ~Resource() noexcept;

	/*!
	 * @brief Default copy assignment operator.
	 */
	Resource& operator=(const Resource&) noexcept;

	/*!
	 * @brief Default move assignment operator.
	 */
	Resource& operator=(Resource&&) noexcept;


	/*!
	 * @brief gets the size of the data stream
	 *
	 * Loads the resource if it has not been loaded yet.
	 *
	 * @return the size of the data stream or -1 if the resource
	 */
	boost::optional<int64_t> getSize() const;

	operator SDL_RWops&();

	operator SDL_RWops&() const;


private:

	mutable SDL_RWops* handle_;

	Resource(SDL_RWops* handle) noexcept;


};

} // namespace resource
} // namespace sdl2wrap

