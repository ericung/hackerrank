#!/bin/bash

read -a val;

for ((i=1; i<=10; i++)); do
    echo $val x $i = $((val*i));
done;



