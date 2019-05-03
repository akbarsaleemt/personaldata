#!/bin/bash
 
str="This is the main string"
 
if [[ $str = *"is the main"* ]]; then
    echo "Yes"
  fi
  ch=i
if [[ $str = *"$ch"* ]]; then
    echo "Yes"
  fi

