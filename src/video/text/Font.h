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

#pragma once

#include <map>
#include <memory>

#include "SDL_ttf.h"

#include "resource/Resource.h"

namespace sdl2wrap {
namespace video {
namespace text {

class Font
{
public:

	using TTFFontUPtr = std::unique_ptr<TTF_Font, decltype(&TTF_CloseFont)>;

	/*!
	 * @brief Creates a font from a Resource
	 *
	 * The font is not loaded until it is used, thus this constructor does not throw if the resource is not actually a font.
	 * If you want to load it directly, use the @link Font::Font(const Resource&, EagerTag) @endlink constructor instead
	 */
	Font(const resource::Resource resource);

	/*!
	 * @brief Deleted default copy constructor.
	 */
	Font(const Font&);

	/*!
	 * @brief Default move constructor.
	 */
	Font(Font&&);

	/*!
	 * @brief Default destructor.
	 */
	~Font() noexcept;


	/*!
	 * @brief Deleted default copy assignment operator.
	 */
	Font& operator=(const Font&);

	/*!
	 * @brief Default move assignment operator.
	 */
	Font& operator=(Font&&);


protected:

private:

	resource::Resource fontHandle_;

	mutable std::map<int, TTFFontUPtr> loadedSizes_;

	void loadPtSize(int ptSize) const;

};

} // namespace text
} // namespace video
} // namespace sdl2wrap
