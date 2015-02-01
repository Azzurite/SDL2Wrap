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

#pragma once

#include <string>

#include "SDL.h"

#include "resource/Resource.h"

namespace sdl2wrap {
namespace resources {


class FileResource final : public Resource
{
public:

	/*!
	 * @brief Construct a file resource from a file name.
	 * @param fileName the name of the file, relative to the application directory or absolute.
	 */
	explicit FileResource(std::string fileName) noexcept;

	/*!
	 * @brief Default copy constructor.
	 */
	FileResource(const FileResource&);

	/*!
	 * @brief Default move constructor.
	 */
	FileResource(FileResource&&);

	/*!
	 * @brief Default destructor.
	 */
	~FileResource() noexcept;

	/*!
	 * @brief Default copy assignment operator.
	 */
	FileResource& operator=(const FileResource&);

	/*!
	 * @brief Default move assignment operator.
	 */
	FileResource& operator=(FileResource&&);


protected:

	virtual SDL_RWops* load() override;

	virtual SDL_RWops* load() const override;

private:

	std::string fileName_;

};

} // namespace resources
} // namespace sdl2wrap

