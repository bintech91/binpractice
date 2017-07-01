#!/bin/bash

FILE_CPP="$1"
SOURCE_FOLDER=$(pwd -P)
FORMAT_CPP_REGEX="^[A-Za-z\_]*\.cpp$"

CORRECT_FORMAT=0

if [[ $FILE_CPP =~ $FORMAT_CPP_REGEX ]]; then CORRECT_FORMAT=1; fi

if [ "$FILE_CPP" == "" -o $CORRECT_FORMAT == 0 ]
then
	echo "Please target correct format input file to run test"
	echo "Example:"
	echo "./bincp_test.sh your_target_file.cpp"
	exit 0
fi
echo $SOURCE_FOLDER
echo "start compile $FILE_CPP"
TEST_NAME=$(echo $FILE_CPP | sed -E  's/(.*)\.cpp/\1/')

if [ -f "$SOURCE_FOLDER/$TEST_NAME.release" ]
then
	echo "remove $SOURCE_FOLDER/$TEST_NAME.release"
	rm "$SOURCE_FOLDER/$TEST_NAME.release"
fi

if [ -f "$SOURCE_FOLDER/$TEST_NAME.in" ]
then
	echo "$SOURCE_FOLDER/$TEST_NAME.in exists. Please test with your input!"
else
	echo "$SOURCE_FOLDER/$TEST_NAME.in does not exist. Create new one!"
	echo "0" > $SOURCE_FOLDER/$TEST_NAME.in
fi


if [ -f "$SOURCE_FOLDER/$TEST_NAME.out" ]
then
	echo "$SOURCE_FOLDER/$TEST_NAME.out exists. It will be modified!"
else
	echo "$SOURCE_FOLDER/$TEST_NAME.out does not exist. Create new one!"
	echo "0" > $SOURCE_FOLDER/$TEST_NAME.out
fi

g++ $SOURCE_FOLDER/$TEST_NAME.cpp -o $SOURCE_FOLDER/$TEST_NAME.release -std=c++11
$SOURCE_FOLDER/$TEST_NAME.release < $SOURCE_FOLDER/$TEST_NAME.in > $SOURCE_FOLDER/$TEST_NAME.out

echo "complete compile"