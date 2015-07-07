#!/bin/bash 
ls MyServiceFunctions/include/ | awk '{print "ln -s ../MyServiceFunctions/include/"$1" include/"$1}' | sh
ls BoostServiceFunctions/include/ | awk '{print "ln -s ../BoostServiceFunctions/include/"$1" include/"$1}' | sh
ln -s BoostServiceFunctions/libBoostServiceFunctions.so libBoostServiceFunctions.so
ln -s MyServiceFunctions/libMyServiceFunctions.so libMyServiceFunctions.so
