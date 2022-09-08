#!/bin/bash

echo -n 'Ana Gahez ya Basha>  ';read varname
echo You said: $varname
while [ 1 ]; do
echo -n 'Ana Gahez ya Basha>  '  ;read varname
if [[ $varname != 'exit' ]]; then
	echo You said: $varname
else
	echo 'Good Bye :)'
	break
fi
done