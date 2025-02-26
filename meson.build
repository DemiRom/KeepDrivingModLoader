project(
	'KeepDrivingModLoader',
	'c',
	version: '0.1',
	default_options: ['warning_level=3'],
)

lib = library(
	'gmmodloader',
	'LibGMModLoader/src/libmodloader.c',
	'LibGMModLoader/libmodloader.h',
	install: true,
)

executable('DataPacker', 'DataPacker/src/datapacker.c', link_with: lib, install: true)
executable(
	'DataExtractor',
	'DataExtractor/src/dataextractor.c',
	link_with: lib,
	install: true,
)
