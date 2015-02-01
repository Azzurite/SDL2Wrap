/*! @file
 *
 * @date 15.12.2014
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

#include "resource/FileResource.h"

#include <string>
#include <iostream>

namespace sdl2wrap {
namespace resources {

namespace {
constexpr const char* cREAD_MODE = "r";

constexpr const char* cWRITE_MODE = "r+";
}



// ====== public: ======

FileResource::FileResource(std::string fileName) noexcept : fileName_(fileName) { }

FileResource::FileResource(const FileResource&) = delete;

FileResource::FileResource(FileResource&&) = default;

FileResource::~FileResource() noexcept = default;

FileResource& FileResource::operator=(const FileResource&) = delete;

FileResource& FileResource::operator=(FileResource&&) = default;

// ====== protected: ======
SDL_RWops* FileResource::load()
{
	return SDL_RWFromFile(fileName_.c_str(), cWRITE_MODE);
}

SDL_RWops* FileResource::load() const
{
	return SDL_RWFromFile(fileName_.c_str(), cREAD_MODE);
}

// ====== private: ======

// ====== freestanding: ======

} // namespace resources
} // namespace sdl2wrap

