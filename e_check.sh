rm -rf mix
rm -rf cor
rm -rf inp

touch inp
touch cor
touch mix

g++ a.cpp

echo "-----------------------"

for entry in *.inp 
do
   ./a.out < $entry >> inp
done

for entry in *.cor
do
   cat $entry >> cor
done

for ((i = 1; i <= $(< inp wc -l); i++));
do
	echo "$(head -n $i inp | tail -1)      $(head -n $i cor | tail -1)" 

done

echo "-----------------------"

diff inp cor

rm -rf mix
rm -rf inp
rm -rf cor
