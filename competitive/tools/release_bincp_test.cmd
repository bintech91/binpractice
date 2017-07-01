#!/bin/bash

SOURCE_FOLDER=$(pwd -P)
cd ~
HAVE_BINCP=$(cat .bashrc|grep bincp_test)
if [ "$HAVE_BINCP" != "" ]
then
	echo "bincp_test has been installed already"
fi

chmod -f 755 bincp_test.cmd
echo "alias bincp_test='$SOURCE_FOLDER/bincp_test.cmd'" >> .bashrc
source .bashrc