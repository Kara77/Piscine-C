#!/bin/bash

if [ $# == 0 ]
then
	grep -c -i "***"
else
	grep -i $1 -wc
fi
