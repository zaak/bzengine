#!/bin/sh

if [ "$1" = "--clean" ]
	then
		make clean
		rm -rf .deps/
		rm -rf autom4te.cache/
		git clean -f
	else
		sh ./buildconf
		sh ./configure

		automake
		make -j4
fi
