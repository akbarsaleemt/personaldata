function fun()
{

  path_var=($PWD)
  echo $path_var
#  return $path_var
}

var=$(fun)
echo $!
echo "my path is $var"
