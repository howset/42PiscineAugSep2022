#!/bin/bash
#ifconfig -a | grep ether | sed "s/ether//g" | sed "s/[[:space:]]//g"
#ifconfig -a | grep ether | sed "s/ether//g" 
ifconfig -a | grep ether | sed "s/ether//" | sed "s/[[:space:]]//g" | cut -c1-17
