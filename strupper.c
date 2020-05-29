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
#include <string.h>

int c;

int main(int argc, char *argv[])
{

	if(argc >= 2)
	{
		printf("Strupper - Copyright (C) 2020  Sindastra <https://github.com/sindastra/strupper>\n");
		printf("This program comes with ABSOLUTELY NO WARRANTY; for details use `-w'.\n");
		printf("This is free software, and you are welcome to redistribute it\n");
		printf("under certain conditions; use `-c' for details.\n");
		printf("\n");

		if(!strcmp(argv[1],"version") || !strcmp(argv[1],"-v") || !strcmp(argv[1],"--version"))
		{
			printf("Version is %s\n", "2020-05-29-r3");
		}

		if(!strcmp(argv[1],"help") || !strcmp(argv[1],"-h") || !strcmp(argv[1],"--help") || !strcmp(argv[1],"/?"))
		{
			printf("Arguments are:\n");
			printf("-h\tShow this help\n");
			printf("-v\tShow version\n");
			printf("-w\tShow license info (warranty)\n");
			printf("-c\tShow license info (conditions)\n");
		}

		if(!strcmp(argv[1],"-w"))
		{
			printf("This program is distributed in the hope that it will be useful,\n");
			printf("but WITHOUT ANY WARRANTY; without even the implied warranty of\n");
			printf("MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n");
			printf("GNU General Public License for more details.\n");
		}

		if(!strcmp(argv[1],"-c"))
		{
			printf("This program is free software: you can redistribute it and/or modify\n");
			printf("it under the terms of the GNU General Public License as published by\n");
			printf("the Free Software Foundation, either version 3 of the License, or\n");
			printf("(at your option) any later version.\n");
		}

		// This will always show under -w and -c and thus MUST come afterwards
		if(!strcmp(argv[1],"-w") || !strcmp(argv[1],"-c"))
		{
			printf("\n");
			printf("You should have received a copy of the GNU General Public License\n");
			printf("along with this program.  If not, see <https://www.gnu.org/licenses/>.\n");
		}

		return 0;
	}

	while((c = getchar()) != EOF)
	{
		// If called as strlower do the opposite conversion
		// copy and rename the program or symlink to it as strlower
		if(strstr(argv[0],"strlower") && !strstr(argv[0],"strupper"))
		{
			if(c >= 65 && c <=90)
				c += 32;
		}
		else
		{
			if(c >= 97 && c <= 122)
				c -= 32;
		}
		putchar(c);
	}

	return 0;
}
