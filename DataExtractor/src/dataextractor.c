#include <stdio.h>
#include <stdlib.h>

#include <LibGMModloader/libmodloader.h>

#define _shift(xs, xs_sz) (NULL, (xs_sz)--, *(xs)++)
#define shift(argc, argv) _shift(*argv, *argc)

int main(int argc, char** argv) {
	const char *prog_name = shift(&argc, &argv);
	const char *flag      = shift(&argc, &argv);
	const char *filename  = shift(&argc, &argv);

	if(flag == NULL || filename == NULL) {
		fprintf(stderr, "Usage: %s -e filename.win\n", prog_name);
		return EXIT_FAILURE;
	}

	print_version();

	printf("Hello, World! %s %s %s\n", prog_name, flag, filename);

	return EXIT_SUCCESS;
}
