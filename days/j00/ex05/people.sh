ldapsearch -xLLL cn='z*' cn | grep "^cn:" | sort -d -r -f | cut -c 5-
