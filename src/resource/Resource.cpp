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

#include "resource/Resource.h"

#include "SDL.h"
#include "boost/optional.hpp"
using boost::optional;
#include "Exceptions.h"

namespace sdl2wrap {
namespace resource {


namespace {
constexpr const char* cREAD_MODE = "r";

constexpr const char* cWRITE_MODE = "r+";
}



// ====== public: ======

Resource Resource::fromFile(const std::string& path)
{
	SDL_RWops* rwOps = SDL_RWFromFile(path.c_str(), cWRITE_MODE);
	if (rwOps == nullptr) {
		throw azzu::utils::sdlError("Could not read file.");
	}
	return Resource(rwOps);
}

Resource::Resource(const Resource&) noexcept = delete;

Resource::Resource(Resource&&) noexcept = default;

Resource::~Resource() noexcept
{
	SDL_FreeRW(handle_);
}

Resource& Resource::operator=(const Resource&) noexcept = delete;

Resource& Resource::operator=(Resource&&) noexcept = default;

optional<int64_t> Resource::getSize() const
{
	auto size = SDL_RWsize(handle_);

	if (size == -1) return boost::none;

	if (size < -1) {
		throw azzu::utils::sdlError("Error while retrieving the size of the resource.");
	}

	return size;
}

Resource::operator SDL_RWops&()
{
	return *handle_;
}

Resource::operator SDL_RWops&() const
{
	return *handle_;
}

// ====== protected: ======

// ====== private: ======

Resource::Resource(SDL_RWops* handle) noexcept : handle_(handle)
{
}

// ====== freestanding: ======



} // namespace resource
} // namespace sdl2wrap

