ldapsearch -xLLL sn | grep '^sn' | cut -c 5- | grep BON | wc -l | tr -d ' '
