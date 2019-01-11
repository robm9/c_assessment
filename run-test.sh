#/bin/bash

# < means read file into programs input (not using this time )


# > means write program's output file
# this is called "redirection"

build/hexdump hexdump-test-text > textOutput.text
build/hexdump hexdump-txt-binary.ico > binaryOutput.txt