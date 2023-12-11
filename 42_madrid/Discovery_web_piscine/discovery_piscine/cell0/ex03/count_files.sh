#!/bin/bash
count=$(find . -type f -o -type d | wc -l | tr -d '  ')

echo "$count"

