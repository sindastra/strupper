/**
 * strupper converts lowercase characters to uppercase (stdin to stdout)
 * Copyright (C) 2020  Sindastra <https://github.com/sindastra/strupper>
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <stdio.h>

int c;

int main(void)
{

	while((c = getchar()) != EOF)
	{
		if(c >= 97 && c <= 122)
			c -= 32;

		putchar(c);
	}

	return 0;
}
