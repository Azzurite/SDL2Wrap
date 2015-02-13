/*! @file
 *
 * @date 08.02.2015
 * @author Azzurite
 *
 * @copyright GPL v3
 *   Copyright (C) 2015 Azzurite
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

#include "video/text/Font.h"

#include <map>

#include "SDL_ttf.h"
#include "Exceptions.h"

#include "resource/Resource.h"
using sdl2wrap::resource::Resource;

namespace sdl2wrap {
namespace video {
namespace text {


// ====== public: ======

Font::Font(const Resource resource) : fontHandle_(resource) { }

Font::Font(const Font&) = delete;

Font::Font(Font&&) = default;

Font::~Font() = default;

Font& Font::operator=(const Font&) = delete;

Font& Font::operator=(Font&&) = default;

// ====== protected: ======

// ====== private: ======

void Font::loadPtSize(int ptSize) const
{
	if (loadedSizes_.find(ptSize) == loadedSizes_.end()) {
		auto rwOps = static_cast<SDL_RWops>(fontHandle_);
		auto* sdlFont_ = TTF_OpenFontRW(&rwOps, 0, ptSize);
		if (!sdlFont_) throw azzu::utils::sdlError("Error while loading font.");
	}
}

// ====== freestanding: ======


} // namespace text
} // namespace video
} // namespace sdl2wrap
