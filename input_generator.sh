#!/bin/bash

random_generator()
{
        num=$1
        minimum=$2
        maximum=$3

        #Check the taken values are valid
        if [ $maximum -lt $minimum ]; then
        echo "Maximum value can't be lower than minimum value"
        exit 1
        fi

        #Find out the difference between the numbers
        diff=$(($maximum-$minimum))

        #Check the difference value
        if [[ $diff == 1 ]]; then
                echo "The range of numbers must be more than 1"
                exit 1
        fi

        for (( i=1; i<=num; i++ ))
        do
                #Generate the random number
                randomNumber[$i]=$(($minimum + $RANDOM % $maximum))
        done
}

case "$1" in	
	hw5-1)
       		random_generator 1 0 10000
		echo -n ${randomNumber[1]}
       		random_generator 1 0 10000
		echo ".${randomNumber[1]}"
      		;;
	hw5-2)
       		random_generator 1 1 2500 
		echo "${randomNumber[1]}"
      		;;
	hw5-3)
       		random_generator 1 1 240
		echo -n "${randomNumber[1]}"
       		random_generator 1 10 1000
		echo " ${randomNumber[1]}"
      		;;
	hw5-4)
       		random_generator 1 1 12
		echo -n "${randomNumber[1]}"
       		random_generator 1 0 59
		echo " ${randomNumber[1]}"
      		;;
esac
