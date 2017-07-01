#!/bin/bash

cd "../"
SOURCE_FOLDER=$(pwd -P)

echo "remove $SOURCE_FOLDER/amazon/*.release"
cd "$SOURCE_FOLDER/amazon/"
rm *.release

echo "remove $SOURCE_FOLDER/codility/*.release"
cd "$SOURCE_FOLDER/codility/"
rm *.release

echo "remove $SOURCE_FOLDER/funny/*.release"
cd "$SOURCE_FOLDER/funny/"
rm *.release

echo "remove $SOURCE_FOLDER/graph/*.release"
cd "$SOURCE_FOLDER/graph/"
rm *.release

echo "remove $SOURCE_FOLDER/hackerrank/*.release"
cd "$SOURCE_FOLDER/hackerrank/"
rm *.release

echo "remove completed"