/*
 * SPDX-License-Identifier: ISC
 *
 * Copyright (C) 2024 Michael Drake <tlsa@netsurf-browser.org>
 */

/**
 * \file Simple bitmap font.
 */

#include "bits.h"
#include "font.h"

/**
 * Bitmap font data.
 */
const cgifh_glyph_t font_h8[CGIFH_GLYPH_COUNT] = {
	['a'] = {
		.advance = 5,
		.data = {
			________,
			SSS_____,
			___S____,
			_SSS____,
			S__S____,
			_SSS____,
			________,
			________,
		},
	},
	['b'] = {
		.advance = 6,
		.data = {
			S_______,
			SSSS____,
			S___S___,
			S___S___,
			S___S___,
			SSSS____,
			________,
			________,
		},
	},
	['c'] = {
		.advance = 6,
		.data = {
			________,
			_SSS____,
			S___S___,
			S_______,
			S___S___,
			_SSS____,
			________,
			________,
		},
	},
	['d'] = {
		.advance = 6,
		.data = {
			____S___,
			_SSSS___,
			S___S___,
			S___S___,
			S___S___,
			_SSSS___,
			________,
			________,
		},
	},
	['e'] = {
		.advance = 6,
		.data = {
			________,
			_SSS____,
			S___S___,
			SSSS____,
			S_______,
			_SSSS___,
			________,
			________,
		},
	},
	['f'] = {
		.advance = 4,
		.data = {
			_SS_____,
			S_______,
			SSS_____,
			S_______,
			S_______,
			S_______,
			________,
			________,
		},
	},
	['g'] = {
		.advance = 5,
		.data = {
			________,
			_SS_____,
			S__S____,
			S__S____,
			S__S____,
			_SSS____,
			___S____,
			SSS_____,
		},
	},
	['h'] = {
		.advance = 5,
		.data = {
			S_______,
			SSS_____,
			S__S____,
			S__S____,
			S__S____,
			S__S____,
			________,
			________,
		},
	},
	['i'] = {
		.advance = 2,
		.data = {
			S_______,
			________,
			S_______,
			S_______,
			S_______,
			S_______,
			________,
			________,
		},
	},
	['j'] = {
		.advance = 3,
		.data = {
			_S______,
			________,
			_S______,
			_S______,
			_S______,
			_S______,
			_S______,
			S_______,
		},
	},
	['k'] = {
		.advance = 5,
		.data = {
			S_______,
			S__S____,
			S_S_____,
			SS______,
			S_S_____,
			S__S____,
			________,
			________,
		},
	},
	['l'] = {
		.advance = 2,
		.data = {
			S_______,
			S_______,
			S_______,
			S_______,
			S_______,
			S_______,
			________,
			________,
		},
	},
	['m'] = {
		.advance = 6,
		.data = {
			________,
			SSSS____,
			S_S_S___,
			S_S_S___,
			S___S___,
			S___S___,
			________,
			________,
		},
	},
	['n'] = {
		.advance = 5,
		.data = {
			________,
			SSS_____,
			S__S____,
			S__S____,
			S__S____,
			S__S____,
			________,
			________,
		},
	},
	['o'] = {
		.advance = 5,
		.data = {
			________,
			_SS_____,
			S__S____,
			S__S____,
			S__S____,
			_SS_____,
			________,
			________,
		},
	},
	['p'] = {
		.advance = 5,
		.data = {
			________,
			SSS_____,
			S__S____,
			S__S____,
			S__S____,
			SSS_____,
			S_______,
			S_______,
		},
	},
	['q'] = {
		.advance = 5,
		.data = {
			________,
			_SS_____,
			S__S____,
			S__S____,
			S__S____,
			_SSS____,
			___S____,
			___S____,
		},
	},
	['r'] = {
		.advance = 5,
		.data = {
			________,
			SSS_____,
			S__S____,
			S_______,
			S_______,
			S_______,
			________,
			________,
		},
	},
	['s'] = {
		.advance = 6,
		.data = {
			________,
			_SSSS___,
			S_______,
			_SSS____,
			____S___,
			SSSS____,
			________,
			________,
		},
	},
	['t'] = {
		.advance = 4,
		.data = {
			S_______,
			SSS_____,
			S_______,
			S_______,
			S_______,
			_SS_____,
			________,
			________,
		},
	},
	['u'] = {
		.advance = 5,
		.data = {
			________,
			S__S____,
			S__S____,
			S__S____,
			S__S____,
			_SSS____,
			________,
			________,
		},
	},
	['v'] = {
		.advance = 6,
		.data = {
			________,
			S___S___,
			S___S___,
			S___S___,
			_S_S____,
			__S_____,
			________,
			________,
		},
	},
	['w'] = {
		.advance = 6,
		.data = {
			________,
			S___S___,
			S_S_S___,
			S_S_S___,
			S_S_S___,
			_SSS____,
			________,
			________,
		},
	},
	['x'] = {
		.advance = 6,
		.data = {
			________,
			S___S___,
			_S_S____,
			__S_____,
			_S_S____,
			S___S___,
			________,
			________,
		},
	},
	['y'] = {
		.advance = 5,
		.data = {
			________,
			S__S____,
			S__S____,
			S__S____,
			S__S____,
			_SSS____,
			___S____,
			SSS_____,
		},
	},
	['z'] = {
		.advance = 5,
		.data = {
			________,
			SSSS____,
			___S____,
			_SS_____,
			S_______,
			SSSS____,
			________,
			________,
		},
	},
	['A'] = {
		.advance = 6,
		.data = {
			__S_____,
			_S_S____,
			S___S___,
			SSSSS___,
			S___S___,
			S___S___,
			________,
			________,
		},
	},
	['B'] = {
		.advance = 6,
		.data = {
			SSSS____,
			S___S___,
			SSSS____,
			S___S___,
			S___S___,
			SSSS____,
			________,
		},
	},
	['C'] = {
		.advance = 6,
		.data = {
			_SSS____,
			S___S___,
			S_______,
			S_______,
			S___S___,
			_SSS____,
			________,
			________,
		},
	},
	['D'] = {
		.advance = 6,
		.data = {
			SSSS____,
			S___S___,
			S___S___,
			S___S___,
			S___S___,
			SSSS____,
			________,
			________,
		},
	},
	['E'] = {
		.advance = 6,
		.data = {
			SSSSS___,
			S_______,
			SSSS____,
			S_______,
			S_______,
			SSSSS___,
			________,
			________,
		},
	},
	['F'] = {
		.advance = 6,
		.data = {
			SSSSS___,
			S_______,
			SSSS____,
			S_______,
			S_______,
			S_______,
			________,
			________,
		},
	},
	['G'] = {
		.advance = 6,
		.data = {
			_SSS____,
			S___S___,
			S_______,
			S__SS___,
			S___S___,
			_SSS____,
			________,
			________,
		},
	},
	['H'] = {
		.advance = 6,
		.data = {
			S___S___,
			S___S___,
			SSSSS___,
			S___S___,
			S___S___,
			S___S___,
			________,
			________,
		},
	},
	['I'] = {
		.advance = 4,
		.data = {
			SSS_____,
			_S______,
			_S______,
			_S______,
			_S______,
			SSS_____,
			________,
			________,
		},
	},
	['J'] = {
		.advance = 5,
		.data = {
			_SSS____,
			___S____,
			___S____,
			___S____,
			S__S____,
			_SS_____,
			________,
			________,
		},
	},
	['K'] = {
		.advance = 6,
		.data = {
			S__S____,
			S_S_____,
			SS______,
			S_S_____,
			S__S____,
			S___S___,
			________,
			________,
		},
	},
	['L'] = {
		.advance = 5,
		.data = {
			S_______,
			S_______,
			S_______,
			S_______,
			S_______,
			SSSS____,
			________,
			________,
		},
	},
	['M'] = {
		.advance = 8,
		.data = {
			S_____S_,
			SS___SS_,
			S_S_S_S_,
			S__S__S_,
			S__S__S_,
			S_____S_,
			________,
			________,
		},
	},
	['N'] = {
		.advance = 6,
		.data = {
			S___S___,
			SS__S___,
			S_S_S___,
			S__SS___,
			S___S___,
			S___S___,
			________,
			________,
		},
	},
	['O'] = {
		.advance = 6,
		.data = {
			_SSS____,
			S___S___,
			S___S___,
			S___S___,
			S___S___,
			_SSS____,
			________,
			________,
		},
	},
	['P'] = {
		.advance = 6,
		.data = {
			SSSS____,
			S___S___,
			SSSS____,
			S_______,
			S_______,
			S_______,
			________,
			________,
		},
	},
	['Q'] = {
		.advance = 6,
		.data = {
			_SSS____,
			S___S___,
			S___S___,
			S___S___,
			_S_S____,
			__SSS___,
			________,
			________,
		},
	},
	['R'] = {
		.advance = 6,
		.data = {
			SSS_____,
			S__S____,
			SSS_____,
			S__S____,
			S___S___,
			S___S___,
			________,
			________,
		},
	},
	['S'] = {
		.advance = 7,
		.data = {
			_SSSS___,
			S____S__,
			_SS_____,
			___SS___,
			S____S__,
			_SSSS___,
			________,
			________,
		},
	},
	['T'] = {
		.advance = 6,
		.data = {
			SSSSS___,
			__S_____,
			__S_____,
			__S_____,
			__S_____,
			__S_____,
			________,
			________,
		},
	},
	['U'] = {
		.advance = 6,
		.data = {
			S___S___,
			S___S___,
			S___S___,
			S___S___,
			S___S___,
			_SSS____,
			________,
			________,
		},
	},
	['V'] = {
		.advance = 6,
		.data = {
			S___S___,
			S___S___,
			S___S___,
			_S_S____,
			_S_S____,
			__S_____,
			________,
			________,
		},
	},
	['W'] = {
		.advance = 8,
		.data = {
			S_____S_,
			S_____S_,
			S__S__S_,
			S_S_S_S_,
			SS___SS_,
			S_____S_,
			________,
			________,
		},
	},
	['X'] = {
		.advance = 6,
		.data = {
			S___S___,
			_S_S____,
			__S_____,
			__S_____,
			_S_S____,
			S___S___,
			________,
			________,
		},
	},
	['Y'] = {
		.advance = 6,
		.data = {
			S___S___,
			S___S___,
			_S_S____,
			__S_____,
			__S_____,
			__S_____,
			________,
			________,
		},
	},
	['Z'] = {
		.advance = 5,
		.data = {
			SSSS____,
			___S____,
			__S_____,
			_S______,
			S_______,
			SSSS____,
			________,
			________,
		},
	},
	['0'] = {
		.advance = 6,
		.data = {
			_SSS____,
			S___S___,
			S__SS___,
			SS__S___,
			S___S___,
			_SSS____,
			________,
			________,
		},
	},
	['1'] = {
		.advance = 6,
		.data = {
			__S_____,
			_SS_____,
			__S_____,
			__S_____,
			__S_____,
			_SSS____,
			________,
			________,
		},
	},
	['2'] = {
		.advance = 6,
		.data = {
			_SSS____,
			S___S___,
			___S____,
			_SS_____,
			S_______,
			SSSSS___,
			________,
			________,
		},
	},
	['3'] = {
		.advance = 6,
		.data = {
			_SSS____,
			S___S___,
			__SS____,
			____S___,
			S___S___,
			_SSS____,
			________,
			________,
		},
	},
	['4'] = {
		.advance = 6,
		.data = {
			___S____,
			__SS____,
			_S_S____,
			S__S____,
			SSSSS___,
			___S____,
			________,
			________,
		},
	},
	['5'] = {
		.advance = 6,
		.data = {
			SSSSS___,
			S_______,
			SSSS____,
			____S___,
			S___S___,
			_SSS____,
			________,
			________,
		},
	},
	['6'] = {
		.advance = 6,
		.data = {
			_SSS____,
			S_______,
			SSSS____,
			S___S___,
			S___S___,
			_SSS____,
			________,
			________,
		},
	},
	['7'] = {
		.advance = 6,
		.data = {
			SSSSS___,
			___S____,
			__S_____,
			_S______,
			_S______,
			_S______,
			________,
			________,
		},
	},
	['8'] = {
		.advance = 6,
		.data = {
			_SSS____,
			S___S___,
			_SSS____,
			S___S___,
			S___S___,
			_SSS____,
			________,
			________,
		},
	},
	['9'] = {
		.advance = 6,
		.data = {
			_SSS____,
			S___S___,
			S___S___,
			_SSSS___,
			____S___,
			_SSS____,
			________,
			________,
		},
	},
	[' '] = {
		.advance = 3,
		.data = {
			________,
			________,
			________,
			________,
			________,
			________,
			________,
			________,
		},
	},
	['!'] = {
		.advance = 2,
		.data = {
			S_______,
			S_______,
			S_______,
			S_______,
			________,
			S_______,
			________,
			________,
		},
	},
	['"'] = {
		.advance = 4,
		.data = {
			S_S_____,
			S_S_____,
			________,
			________,
			________,
			________,
			________,
			________,
		},
	},
	['('] = {
		.advance = 3,
		.data = {
			_S______,
			S_______,
			S_______,
			S_______,
			S_______,
			S_______,
			_S______,
			________,
		},
	},
	[')'] = {
		.advance = 3,
		.data = {
			S_______,
			_S______,
			_S______,
			_S______,
			_S______,
			_S______,
			S_______,
			________,
		},
	},
	[','] = {
		.advance = 3,
		.data = {
			________,
			________,
			________,
			________,
			_S______,
			S_______,
			________,
			________,
		},
	},
	['-'] = {
		.advance = 4,
		.data = {
			________,
			________,
			________,
			SSS_____,
			________,
			________,
			________,
			________,
		},
	},
	['_'] = {
		.advance = 6,
		.data = {
			________,
			________,
			________,
			________,
			________,
			________,
			________,
			SSSSS___,
		},
	},
	['.'] = {
		.advance = 2,
		.data = {
			________,
			________,
			________,
			________,
			________,
			S_______,
			________,
			________,
		},
	},
	[':'] = {
		.advance = 2,
		.data = {
			________,
			________,
			S_______,
			________,
			________,
			S_______,
			________,
			________,
		},
	},
	[';'] = {
		.advance = 3,
		.data = {
			________,
			________,
			_S______,
			________,
			________,
			_S______,
			S_______,
			________,
		},
	},
	['?'] = {
		.advance = 6,
		.data = {
			_SSS____,
			S___S___,
			___S____,
			__S_____,
			________,
			__S_____,
			________,
			________,
		},
	},
	['['] = {
		.advance = 3,
		.data = {
			SS______,
			S_______,
			S_______,
			S_______,
			S_______,
			S_______,
			SS______,
			________,
		},
	},
	[']'] = {
		.advance = 3,
		.data = {
			SS______,
			_S______,
			_S______,
			_S______,
			_S______,
			_S______,
			SS______,
			________,
		},
	},
	['{'] = {
		.advance = 4,
		.data = {
			__S_____,
			_S______,
			_S______,
			SS______,
			_S______,
			_S______,
			__S_____,
			________,
		},
	},
	['}'] = {
		.advance = 4,
		.data = {
			S_______,
			_S______,
			_S______,
			_SS_____,
			_S______,
			_S______,
			S_______,
			________,
		},
	},
};
