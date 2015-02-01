/*! @file
 *
 * @date 01.02.2015
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

namespace sdl2wrap {
namespace video {


class Colors
{
public:

	static constexpr auto TRANSPARENT = Color(0x00, 0x00, 0x00, 0x00);
	static constexpr auto ALICEBLUE = Color(0xF0, 0xF8, 0xFF);
	static constexpr auto ANTIQUEWHITE = Color(0xFA, 0xEB, 0xD7);
	static constexpr auto AQUA = Color(0x00, 0xFF, 0xFF);
	static constexpr auto AQUAMARINE = Color(0x7F, 0xFF, 0xD4);
	static constexpr auto AZURE = Color(0xF0, 0xFF, 0xFF);
	static constexpr auto BEIGE = Color(0xF5, 0xF5, 0xDC);
	static constexpr auto BISQUE = Color(0xFF, 0xE4, 0xC4);
	static constexpr auto BLACK = Color(0x00, 0x00, 0x00);
	static constexpr auto BLANCHEDALMOND = Color(0xFF, 0xEB, 0xCD);
	static constexpr auto BLUE = Color(0x00, 0x00, 0xFF);
	static constexpr auto BLUEVIOLET = Color(0x8A, 0x2B, 0xE2);
	static constexpr auto BROWN = Color(0xA5, 0x2A, 0x2A);
	static constexpr auto BURLYWOOD = Color(0xDE, 0xB8, 0x87);
	static constexpr auto CADETBLUE = Color(0x5F, 0x9E, 0xA0);
	static constexpr auto CHARTREUSE = Color(0x7F, 0xFF, 0x00);
	static constexpr auto CHOCOLATE = Color(0xD2, 0x69, 0x1E);
	static constexpr auto CORAL = Color(0xFF, 0x7F, 0x50);
	static constexpr auto CORNFLOWERBLUE = Color(0x64, 0x95, 0xED);
	static constexpr auto CORNSILK = Color(0xFF, 0xF8, 0xDC);
	static constexpr auto CRIMSON = Color(0xDC, 0x14, 0x3C);
	static constexpr auto CYAN = Color(0x00, 0xFF, 0xFF);
	static constexpr auto DARKBLUE = Color(0x00, 0x00, 0x8B);
	static constexpr auto DARKCYAN = Color(0x00, 0x8B, 0x8B);
	static constexpr auto DARKGOLDENROD = Color(0xB8, 0x86, 0x0B);
	static constexpr auto DARKGRAY = Color(0xA9, 0xA9, 0xA9);
	static constexpr auto DARKGREEN = Color(0x00, 0x64, 0x00);
	static constexpr auto DARKGREY = Color(0xA9, 0xA9, 0xA9);
	static constexpr auto DARKKHAKI = Color(0xBD, 0xB7, 0x6B);
	static constexpr auto DARKMAGENTA = Color(0x8B, 0x00, 0x8B);
	static constexpr auto DARKOLIVEGREEN = Color(0x55, 0x6B, 0x2F);
	static constexpr auto DARKORANGE = Color(0xFF, 0x8C, 0x00);
	static constexpr auto DARKORCHID = Color(0x99, 0x32, 0xCC);
	static constexpr auto DARKRED = Color(0x8B, 0x00, 0x00);
	static constexpr auto DARKSALMON = Color(0xE9, 0x96, 0x7A);
	static constexpr auto DARKSEAGREEN = Color(0x8F, 0xBC, 0x8F);
	static constexpr auto DARKSLATEBLUE = Color(0x48, 0x3D, 0x8B);
	static constexpr auto DARKSLATEGRAY = Color(0x2F, 0x4F, 0x4F);
	static constexpr auto DARKSLATEGREY = Color(0x2F, 0x4F, 0x4F);
	static constexpr auto DARKTURQUOISE = Color(0x00, 0xCE, 0xD1);
	static constexpr auto DARKVIOLET = Color(0x94, 0x00, 0xD3);
	static constexpr auto DEEPPINK = Color(0xFF, 0x14, 0x93);
	static constexpr auto DEEPSKYBLUE = Color(0x00, 0xBF, 0xFF);
	static constexpr auto DIMGRAY = Color(0x69, 0x69, 0x69);
	static constexpr auto DIMGREY = Color(0x69, 0x69, 0x69);
	static constexpr auto DODGERBLUE = Color(0x1E, 0x90, 0xFF);
	static constexpr auto FIREBRICK = Color(0xB2, 0x22, 0x22);
	static constexpr auto FLORALWHITE = Color(0xFF, 0xFA, 0xF0);
	static constexpr auto FORESTGREEN = Color(0x22, 0x8B, 0x22);
	static constexpr auto FUCHSIA = Color(0xFF, 0x00, 0xFF);
	static constexpr auto GAINSBORO = Color(0xDC, 0xDC, 0xDC);
	static constexpr auto GHOSTWHITE = Color(0xF8, 0xF8, 0xFF);
	static constexpr auto GOLD = Color(0xFF, 0xD7, 0x00);
	static constexpr auto GOLDENROD = Color(0xDA, 0xA5, 0x20);
	static constexpr auto GRAY = Color(0x80, 0x80, 0x80);
	static constexpr auto GREEN = Color(0x00, 0x80, 0x00);
	static constexpr auto GREENYELLOW = Color(0xAD, 0xFF, 0x2F);
	static constexpr auto GREY = Color(0x80, 0x80, 0x80);
	static constexpr auto HONEYDEW = Color(0xF0, 0xFF, 0xF0);
	static constexpr auto HOTPINK = Color(0xFF, 0x69, 0xB4);
	static constexpr auto INDIANRED = Color(0xCD, 0x5C, 0x5C);
	static constexpr auto INDIGO = Color(0x4B, 0x00, 0x82);
	static constexpr auto IVORY = Color(0xFF, 0xFF, 0xF0);
	static constexpr auto KHAKI = Color(0xF0, 0xE6, 0x8C);
	static constexpr auto LAVENDER = Color(0xE6, 0xE6, 0xFA);
	static constexpr auto LAVENDERBLUSH = Color(0xFF, 0xF0, 0xF5);
	static constexpr auto LAWNGREEN = Color(0x7C, 0xFC, 0x00);
	static constexpr auto LEMONCHIFFON = Color(0xFF, 0xFA, 0xCD);
	static constexpr auto LIGHTBLUE = Color(0xAD, 0xD8, 0xE6);
	static constexpr auto LIGHTCORAL = Color(0xF0, 0x80, 0x80);
	static constexpr auto LIGHTCYAN = Color(0xE0, 0xFF, 0xFF);
	static constexpr auto LIGHTGOLDENRODYELLOW = Color(0xFA, 0xFA, 0xD2);
	static constexpr auto LIGHTGRAY = Color(0xD3, 0xD3, 0xD3);
	static constexpr auto LIGHTGREEN = Color(0x90, 0xEE, 0x90);
	static constexpr auto LIGHTGREY = Color(0xD3, 0xD3, 0xD3);
	static constexpr auto LIGHTPINK = Color(0xFF, 0xB6, 0xC1);
	static constexpr auto LIGHTSALMON = Color(0xFF, 0xA0, 0x7A);
	static constexpr auto LIGHTSEAGREEN = Color(0x20, 0xB2, 0xAA);
	static constexpr auto LIGHTSKYBLUE = Color(0x87, 0xCE, 0xFA);
	static constexpr auto LIGHTSLATEGRAY = Color(0x77, 0x88, 0x99);
	static constexpr auto LIGHTSLATEGREY = Color(0x77, 0x88, 0x99);
	static constexpr auto LIGHTSTEELBLUE = Color(0xB0, 0xC4, 0xDE);
	static constexpr auto LIGHTYELLOW = Color(0xFF, 0xFF, 0xE0);
	static constexpr auto LIME = Color(0x00, 0xFF, 0x00);
	static constexpr auto LIMEGREEN = Color(0x32, 0xCD, 0x32);
	static constexpr auto LINEN = Color(0xFA, 0xF0, 0xE6);
	static constexpr auto MAGENTA = Color(0xFF, 0x00, 0xFF);
	static constexpr auto MAROON = Color(0x80, 0x00, 0x00);
	static constexpr auto MEDIUMAQUAMARINE = Color(0x66, 0xCD, 0xAA);
	static constexpr auto MEDIUMBLUE = Color(0x00, 0x00, 0xCD);
	static constexpr auto MEDIUMORCHID = Color(0xBA, 0x55, 0xD3);
	static constexpr auto MEDIUMPURPLE = Color(0x93, 0x70, 0xDB);
	static constexpr auto MEDIUMSEAGREEN = Color(0x3C, 0xB3, 0x71);
	static constexpr auto MEDIUMSLATEBLUE = Color(0x7B, 0x68, 0xEE);
	static constexpr auto MEDIUMSPRINGGREEN = Color(0x00, 0xFA, 0x9A);
	static constexpr auto MEDIUMTURQUOISE = Color(0x48, 0xD1, 0xCC);
	static constexpr auto MEDIUMVIOLETRED = Color(0xC7, 0x15, 0x85);
	static constexpr auto MIDNIGHTBLUE = Color(0x19, 0x19, 0x70);
	static constexpr auto MINTCREAM = Color(0xF5, 0xFF, 0xFA);
	static constexpr auto MISTYROSE = Color(0xFF, 0xE4, 0xE1);
	static constexpr auto MOCCASIN = Color(0xFF, 0xE4, 0xB5);
	static constexpr auto NAVAJOWHITE = Color(0xFF, 0xDE, 0xAD);
	static constexpr auto NAVY = Color(0x00, 0x00, 0x80);
	static constexpr auto OLDLACE = Color(0xFD, 0xF5, 0xE6);
	static constexpr auto OLIVE = Color(0x80, 0x80, 0x00);
	static constexpr auto OLIVEDRAB = Color(0x6B, 0x8E, 0x23);
	static constexpr auto ORANGE = Color(0xFF, 0xA5, 0x00);
	static constexpr auto ORANGERED = Color(0xFF, 0x45, 0x00);
	static constexpr auto ORCHID = Color(0xDA, 0x70, 0xD6);
	static constexpr auto PALEGOLDENROD = Color(0xEE, 0xE8, 0xAA);
	static constexpr auto PALEGREEN = Color(0x98, 0xFB, 0x98);
	static constexpr auto PALETURQUOISE = Color(0xAF, 0xEE, 0xEE);
	static constexpr auto PALEVIOLETRED = Color(0xDB, 0x70, 0x93);
	static constexpr auto PAPAYAWHIP = Color(0xFF, 0xEF, 0xD5);
	static constexpr auto PEACHPUFF = Color(0xFF, 0xDA, 0xB9);
	static constexpr auto PERU = Color(0xCD, 0x85, 0x3F);
	static constexpr auto PINK = Color(0xFF, 0xC0, 0xCB);
	static constexpr auto PLUM = Color(0xDD, 0xA0, 0xDD);
	static constexpr auto POWDERBLUE = Color(0xB0, 0xE0, 0xE6);
	static constexpr auto PURPLE = Color(0x80, 0x00, 0x80);
	static constexpr auto RED = Color(0xFF, 0x00, 0x00);
	static constexpr auto ROSYBROWN = Color(0xBC, 0x8F, 0x8F);
	static constexpr auto ROYALBLUE = Color(0x41, 0x69, 0xE1);
	static constexpr auto SADDLEBROWN = Color(0x8B, 0x45, 0x13);
	static constexpr auto SALMON = Color(0xFA, 0x80, 0x72);
	static constexpr auto SANDYBROWN = Color(0xF4, 0xA4, 0x60);
	static constexpr auto SEAGREEN = Color(0x2E, 0x8B, 0x57);
	static constexpr auto SEASHELL = Color(0xFF, 0xF5, 0xEE);
	static constexpr auto SIENNA = Color(0xA0, 0x52, 0x2D);
	static constexpr auto SILVER = Color(0xC0, 0xC0, 0xC0);
	static constexpr auto SKYBLUE = Color(0x87, 0xCE, 0xEB);
	static constexpr auto SLATEBLUE = Color(0x6A, 0x5A, 0xCD);
	static constexpr auto SLATEGRAY = Color(0x70, 0x80, 0x90);
	static constexpr auto SLATEGREY = Color(0x70, 0x80, 0x90);
	static constexpr auto SNOW = Color(0xFF, 0xFA, 0xFA);
	static constexpr auto SPRINGGREEN = Color(0x00, 0xFF, 0x7F);
	static constexpr auto STEELBLUE = Color(0x46, 0x82, 0xB4);
	static constexpr auto TAN = Color(0xD2, 0xB4, 0x8C);
	static constexpr auto TEAL = Color(0x00, 0x80, 0x80);
	static constexpr auto THISTLE = Color(0xD8, 0xBF, 0xD8);
	static constexpr auto TOMATO = Color(0xFF, 0x63, 0x47);
	static constexpr auto TURQUOISE = Color(0x40, 0xE0, 0xD0);
	static constexpr auto VIOLET = Color(0xEE, 0x82, 0xEE);
	static constexpr auto WHEAT = Color(0xF5, 0xDE, 0xB3);
	static constexpr auto WHITE = Color(0xFF, 0xFF, 0xFF);
	static constexpr auto WHITESMOKE = Color(0xF5, 0xF5, 0xF5);
	static constexpr auto YELLOW = Color(0xFF, 0xFF, 0x00);
	static constexpr auto YELLOWGREEN = Color(0x9A, 0xCD, 0x32);

	/*!
	 * @brief Default constructor.
	 */
	Colors() noexcept = delete;

	/*!
	 * @brief Default copy constructor.
	 */
	Colors(const Colors&) noexcept = delete;

	/*!
	 * @brief Default move constructor.
	 */
	Colors(Colors&&) noexcept = delete;

	/*!
	 * @brief Default destructor.
	 */
	~Colors() noexcept = delete;


	/*!
	 * @brief Default copy assignment operator.
	 */
	Colors& operator=(const Colors&) noexcept = delete;

	/*!
	 * @brief Default move assignment operator.
	 */
	Colors& operator=(Colors&&) noexcept = delete;


};

} // namespace video
} // namespace sdl2wrap

