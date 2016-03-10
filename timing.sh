#!/bin/sh

rm times.txt

for i in 10 100 250 500 1000 2500 5000 7500 10000 15000 20000 25000 30000 40000 50000; do
	./random $i | ./palindrome >> times.txt
done
