'''
FilesToInstaller.py

Script to create an event file that #includes several given event files.

Author:
	Pikmin1211
'''

import argparse
import os
import textwrap

parser = argparse.ArgumentParser(
	description = 'Script to create an event file that #includes several given event files.'
)

parser.add_argument(
	'--input',
	type = str,
	nargs = '+',
	help = 'Filenames to be combined into the output file.',
	required = True
)
parser.add_argument(
	'--output',
	type = str,
	help = 'Filename of output file.',
	required = True
)
parser.add_argument(
	'--relative-path',
	type = str,
	help = 'Relative file path of the inputs and output files.',
	required = True
)
parser.add_argument(
	'--operation',
	type = str,
	nargs = '?',
	help = 'Operation used on the input files in the output file.',
	default = '#include'
)

args = parser.parse_args()

os.makedirs(os.path.dirname(args.output), exist_ok=True)

with open(args.output, 'w') as outfile:

	outfile.write(textwrap.dedent(f'''\
		// File output by FilesToInstaller
		// Do not edit!
		
	'''))

	for file in args.input:
		file = os.path.relpath(file, args.relative_path)
		outfile.write(f'{args.operation} "{file}"\n')
