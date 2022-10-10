'''
SymCombo.py

Script to combine nocash symbol (.sym) files.

Author:
	Pikmin1211
'''

import argparse
import os

parser = argparse.ArgumentParser(
	description = 'Script to combine nocash symbol (.sym) files.'
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

args = parser.parse_args()

os.makedirs(os.path.dirname(args.output), exist_ok=True)

with open(args.output, 'a') as outfile:
	for file in args.input:
		with open(file, 'r') as infile:
			outfile.write('\n')
			for line in infile:
				outfile.write(line)
