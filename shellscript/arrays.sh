#! /bin/bash
arr=(akbar saleem takkasila)
echo ${arr[*]}
echo ${#arr[*]}
echo ${arr[0]}
echo ${arr[1]:2}
echo ${arr[@]:1:2}
echo ${arr[@]/*[em]*/}

