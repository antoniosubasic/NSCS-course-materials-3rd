#!/bin/sh

exec <einaus.txt

sum=0
while read a b; do
    value="$(echo $b | tr ',' '.')"
    operator="$([ "$a" = "ein" ] && echo "+" || echo "-")"
    sum="$(echo "$sum $operator $value" | bc)"
done

echo "Gesamtsumme: $sum"
