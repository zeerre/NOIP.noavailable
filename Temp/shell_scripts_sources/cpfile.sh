#!/bin/bash
#########################################################################
# File Name: cpfile.sh
# Author:GeelBear
# mail:zeerre98988@gmail.com
# Created And Modified Time: ====2022-03-22  21-33-13====
#########################################################################
cd /home/noi/geek/gitproject/github/NOIP.zeerre.ssh/BaseFolder

for dir in $(dir)

do

[ -d $(dir) ] 

echo $(dir)/ | xargs -n 1 cp -v /home/noi/geek/gitproject/github/NOIP.zeerre.ssh/Temp/shell_scripts_sources/README.md

done
